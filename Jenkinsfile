pipeline {
    agent {
        dockerfile true
    }
    stages {
        stage('Build') {
            steps {
                cmakeBuild buildType: 'Debug', cleanBuild: true, installation: 'InSearchPath', steps: [[withCmake: true]]
            }
        }
        stage('Test') {
            steps {
                ctest installation: 'InSearchPath', arguments: '-T Test', workingDir: 'build'
            }
        }
    }
    post {
        always {
            xunit (
                testTimeMargin: '3000',
                thresholdMode: 1,
                thresholds: [
                    skipped(failureThreshold: '0'),
                    failed(failureThreshold: '0')
                ],
                tools: [CTest(
                    pattern: 'build/Testing/**/*.xml',
                    deleteOutputFiles: true,
                    failIfNotNew: false,
                    skipNoTestFiles: true,
                    stopProcessingIfError: true
                    )]
            )
        }
    }
}
