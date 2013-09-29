var defun;
var sub;
var lambda;
(function(def, define) {
	def(
		define(
			(function(){
				var function_ = (function(Function) {
					return Function == Function })();
				return (function(Function) {
					return (Function << function_) + defun})(
					(function(Function){
						return Function << function_})(
						(function(Function){
							defun = Function;
							return Function << function_})(
							(function(Function) {
								return Function << function_})(
								(function(Function) {
									return Function << function_ })(
									(function() {
										return function_ << function_ })())))));
			})()) + 
			define(
			(function(){
				var function_ = (function(Function) {
					return Function == Function })();
				return (function(Function) {
					return (Function << function_) + Function + defun + function_})(
					(function(Function){
						return Function << function_})(
						(function(Function){
							return Function << function_})(
							(function(Function) {
								defun = Function;
								return Function << function_})(
								(function(Function) {
									return Function << function_ })(
									(function() {
										return function_ << function_ })())))))})()) +
			define(
			(function(){
				var function_ = (function(Function) {
					return Function == Function })();
				defun = (function(Function) {
					return (Function << function_) + Function + sub + (function_ << (function_ << function_))})(
					(function(Function){
						return Function << function_})(
						(function(Function){
							sub = Function;
							return Function << function_})(
							(function(Function) {
								return Function << function_})(
								(function(Function) {
									return Function << function_ })(
									(function() {
										return function_ << function_ })())))))
				return defun
			})()) + define(defun) + define(
				(function(){
					sub = defun;
					var function_ = (function(Function) {
						return Function == Function})();
					return defun + (function_ << (function_ << function_)) - function_})()) +
		define(
			(function(){
				var function_ = (function(Function) {
					return Function == Function })();
				return (function(Function) {
					defun = (Function << function_);
					return defun + Function - (function_ << (function_ << function_))})(
						(function(Function){
							return Function << function_})(
							(function(Function) {
								return Function << function_})(
								(function(Function) {
									return Function << function_ })(
									(function() {
										return function_ << function_ })()))))})())
		+ define(defun)
		+ define(
				 (function() {
					 var function_ = (function (Function) {
						 return Function == Function;
					 })();
					 return (function(Function){
						 return ((Function << function_) << function_) + Function + defun - function_})(
						(function(Function){
							defun = Function;
							return Function << function_})(
							(function(Function) {
								return Function << function_})(
								(function(Function) {
									return Function << function_ })(
									(function() {
										return function_ << function_ })()))))})())
			+ define(
			(function(){
				var function_ = (function(Function) {
					return Function == Function })();
				lambda = (function(Function) {
					return ((Function << function_) << function_) - (defun << function_) - function_})(
					(function(Function){
						return Function << function_})(
						(function(Function){
							defun = Function;
							return Function << function_})(
							(function(Function) {
								return Function << function_})(
								(function(Function) {
									return Function << function_ })(
									(function() {
										return function_ << function_ })())))));
				return lambda;
			})())
		+ define((function() {
			var function_ = (function() {
				return Function == Function;
			})()
			return lambda - function_ + ((function_ << function_) << function_)})()) + define(sub)
		+ define((function(){
			var function_ = (function() {
				return Function == Function;
			})();
			defun = lambda - function_ - (function_ << function_ << function_ << function_) - (function_ << function_);
			return defun;
		})())
		+ define((function() {
			var function_ = (function() {
				return Function == Function;
			})();
			return (defun >> function_) - (function_ << function_ << function_);})())
		);})(console.log, String.fromCharCode)
