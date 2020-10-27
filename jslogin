var app = angular.module('myapp', ['ui.router', 'ngDialog']);
app.config(function ($stateProvider) {

  $stateProvider
    .state('welcome', {
      url: '/welcome',
      // ...
      data: {
        requireLogin: false
      },
    views: {
        "viewA": { template: "<p>Hello world from view a</p>" },
        "viewB": { template: "<p>Hello world from view b</p>" }
      }
    })
    .state('app', {
      abstract: true,
      // ...
      data: {
        requireLogin: true // this property will apply to all children of 'app'
      }
    
    })
    .state('app.dashboard', {
     url: '/app',
    views: {
            "viewA": { template: "<p>You already logged in. Hello world from view a</p>" },
            "viewB": { template: "<p>You already logged in.Hello world from view b</p>" }
      }
      // child state of `app`
      // requireLogin === true
    })

});
app.config(function ($httpProvider) {

  $httpProvider.interceptors.push(function ($timeout, $q, $injector) {
    var loginModal, $http, $state;

    // this trick must be done so that we don't receive
    // `Uncaught Error: [$injector:cdep] Circular dependency found`
    $timeout(function () {
      loginModal = $injector.get('loginModal');
      $http = $injector.get('$http');
      $state = $injector.get('$state');
    });

    return {
      responseError: function (rejection) {
        if (rejection.status !== 401) {
          return rejection;
        }

        var deferred = $q.defer();

        loginModal()
          .then(function () {
            deferred.resolve( $http(rejection.config) );
          })
          .catch(function () {
            $state.go('welcome');
            deferred.reject(rejection);
          });

        return deferred.promise;
      }
    };
  });

});
app.controller('LoginModalCtrl', function ($scope) {

  this.cancel = $scope.$dismiss;

  this.submit = function (email, password) {
    var user = {email: email, password: password};
     $rootScope.currentUser = user;
  };

});
app.service('loginModal', function (ngDialog, $rootScope) {

  function assignCurrentUser (user) {
    $rootScope.currentUser = user;
    return user;
  }

  return function() {
    var instance =   ngDialog.openConfirm({
    template: '<div>\
                  <form ng-submit="LoginModalCtrl.submit(_email, _password)">\
                    <input type="email" ng-model="_email" />\
                    <input type="password" ng-model="_password" />\
                    <button>Submit</button>\
                  </form>\
                  <button ng-click="LoginModalCtrl.cancel()">Cancel</button>\
                </div>',
      controller: 'LoginModalCtrl',
      controllerAs: 'LoginModalCtrl',
       plain: true
    });

    return instance.then(assignCurrentUser);
  };

});

app.run(function ($rootScope, $state, loginModal) {

  $rootScope.$on('$stateChangeStart', function (event, toState, toParams) {
    var requireLogin = toState.data.requireLogin;

    if (requireLogin && typeof $rootScope.currentUser === 'undefined') {
      event.preventDefault();

      loginModal()
        .then(function () {
          return $state.go(toState.name, toParams);
        })
        .catch(function () {
          return $state.go('welcome');
        });
    }
  });
});
