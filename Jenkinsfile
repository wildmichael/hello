pipeline {
    agent {
        docker { dockerfile true}
    }
    stages {
        stage('Build') {
            steps {
                dir('build') {
                  cmake -DCMAKE_BUILD_TYPE=Debug ..
                  cmake --build .
                }
            }
        }
    }
}
