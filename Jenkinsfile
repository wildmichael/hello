pipeline {
    agent {
        dockerfile true
    }
    stages {
        stage('Build') {
            steps {
                cmake 'InSearchPath'
                cmakeBuild buildType: 'Debug', cleanBuild: true, installation: 'InSearchPath', steps: [[withCmake: true]]
            }
        }
        stage('Test') {
            steps {
                dir('build') {
                    sh './hello_tests --reporter junit -o results.xml'
                }
            }
        }
    }
    post {
        always {
            junit 'build/results.xml'
        }
    }
}
