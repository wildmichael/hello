pipeline {
    agent {
        dockerfile true
    }
    stages {
        stage('Build') {
            steps {
                cmakeBuild {
                    buildType: 'Debug'
                    cleanBuild: true
                    installation: 'InSearchPath'
                    steps: [[withCmake: true]]
                }
            }
        }
        stage('Test') {
            steps {
                ctest {
                    installation: 'InSearchPath'
                    arguments: '-T Test'
                    workingDir: 'build'
                }
            }
        }
    }
    post {
        always {
            junit 'build/Testing/**/Test.xml'
        }
    }
}
