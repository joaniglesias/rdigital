(function($) {
  $(document).ready(function() {
    writetext();
  });

console.log('hola');

//   jQuery("a.vm-icon-button").on('click', function() {
//     console.log('adios');
//     var caretPos = document.getElementById("edit-field-nuevo-comentario-und-0-value").selectionStart;
//     var textAreaTxt = jQuery("#edit-field-nuevo-comentario-und-0-value").val();
//     var txtToAdd = 'joan';//document.getElementById("btn2").text;
//     jQuery("#edit-field-nuevo-comentario-und-0-value").val(textAreaTxt.substring(0, caretPos) + txtToAdd + textAreaTxt.substring(caretPos) );
// });




  Drupal.behaviors.vimnCustom = {
    attach: function(context, settings) {
      // Edit link: ajax load the form into the modal
      $('button.vm-js').once('vimn-twitter', function() {
        $(this).click(function() {
          //var content = $('div#nuevo textarea').val();

          var layout_area_id = $(this).parents('.panel-body').attr('id');
          var ckeditor_id = $('div#' + layout_area_id + ' textarea').attr('id');
          var ckeditor_text = CKEDITOR.instances[ckeditor_id].getData();
          var button_text = $(this).attr('text-to-print');
          //insert text with no <p> tag http://ckeditor.com/forums/CKEditor/Jquery-data-insert-into-editor
          //Background color: http://jsbin.com/osohak/7/edit?html,js,output
          //console.log(content);
          //console.log(ckeditor);
          //for(var instanceName in CKEDITOR.instances) {
   console.log( ckeditor_text);
   console.log( ckeditor_text.slice(0,-4));
   console.log( ckeditor_text.slice(0,-5));
//}
          CKEDITOR.instances[ckeditor_id].insertHtml('<p></p>');
          CKEDITOR.instances[ckeditor_id].insertHtml(button_text);
          //CKEDITOR.instances[ckeditor_id].insertText('\rhola');
//           CKEDITOR.instances[ckeditor_id].setData(ckeditor_text.slice(0,-5) + button_text, function() {
//     [ckeditor_id].focus();
// });
          //$('div#nuevo textarea').val(content + ckeditor);


        });
      });


    }
  };











}(jQuery));


/**
 * Add Twitter Bootstrap html code to page
 * @return {[type]} [description]
 */
function writetext() {
}
