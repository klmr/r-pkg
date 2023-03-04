#' @useDynLib pkg, .registration = TRUE
#' @docType package
#' @keywords internal
'_PACKAGE'

#' @export
test = function (x) {
    .Call(c_test, x)
}
