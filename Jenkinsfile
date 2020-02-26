pipeline {
    agent {
        dockerfile true
    }
    stages {
        stage('Build') {
            steps {
                dir('build') {
                  sh "cmake -DCMAKE_BUILD_TYPE=Debug .."
                  sh "cmake --build ."
                }
            }
        }
    }
}
