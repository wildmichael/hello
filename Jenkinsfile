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
                ctest 'InSearchPath'
            }
        }
    }
}
