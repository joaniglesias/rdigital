<?php
  $path = current_path();
  $path_params = explode("/", $path);
  $patient_nid = $path_params[1];
?>

<!-- Patient Region -->
<?php $reg_machine_name='patient'; ?>
<div class="panel panel-primary">
  <div id="treatment-patient" class="panel-heading" >
    <h5>
      <?php print $layout['regions'][$reg_machine_name]; ?>
    </h5>
    <h3>
      <?php print $content['patient']; ?>
    </h3>
  </div>
</div>

<div class="panel-group" role="tablist" aria-multiselectable="true">

  <!-- Patient Details Region -->
  <?php $reg_machine_name='patient-details'; ?>
  <div class="panel panel-info">

    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-primary pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print t('Patient Details'); ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body row">
        <div class="col-xs-6">
          <?php print $content['patient_details_left']; ?>
        </div>
        <div class="col-xs-6">
          <?php print $content['patient_details_right']; ?>
        </div>
      </div>
    </div>
  </div>

  <!-- Form Region -->
  <?php $reg_machine_name='rdforms'; ?>
  <div class="panel panel-info">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <div class="pull-right">
        <a class="btn btn-primary" data-toggle="modal" data-target="#CreateForm">
          Create Form
        </a>
        <a class="btn btn-primary" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
          <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
          </span>
        </a>
      </div>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body">
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Measures Record Region -->
  <?php $reg_machine_name='measures_record'; ?>
  <div class="panel panel-success">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-success pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body">
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Treatment Details Region -->
  <?php $reg_machine_name='treatment-details'; ?>
  <div class="panel panel-danger">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-danger pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print t('Treatment Details'); ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body row">
        <div class="col-xs-6">
          <?php print $content['treatment_details_left']; ?>
        </div>
        <div class="col-xs-6">
          <?php print $content['treatment_details_right']; ?>
        </div>
      </div>
    </div>
  </div>

  <!-- Initial Comments Region -->
  <?php $reg_machine_name='initial_comments'; ?>
  <div class="panel panel-danger">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-danger pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body" id='initial-comments-area'>
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Measures Region -->
  <?php $reg_machine_name='measures'; ?>
  <div class="panel panel-danger">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-danger pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body" id='measures-area'>
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Final Comments Region -->
  <?php $reg_machine_name='final_comments'; ?>
  <div class="panel panel-danger">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-danger pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon glyphicon-chevron-down" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body" id='final-comments-area'>
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>
</div>
<?php //dpm(get_defined_vars()); ?>

<!-- Treatment Actions Region -->
<?php $reg_machine_name='treatment_actions'; ?>
<div class="panel panel-default">
  <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
    <div class="pull-right">
      <a class="btn btn-default btn-lg" data-toggle="modal" data-target="#DeleteTreatment">
        <?php print t('Delete Treatment'); ?>
      </a>
      <a class="btn btn-primary btn-lg" href="/">
        <?php print t('Close Treatment'); ?>
      </a>
    </div>
    <h4 class="panel-title" style="margin-top: 7.5px;">
      <?php print t('Actions'); ?>
    </h4>
  </div>
</div>

<!-- Modal Create Form -->
<div class="modal fade" id="CreateForm" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <h4 class="modal-title" id="myModalLabel">
          <?php print t('Create From'); ?>
        </h4>
      </div>
      <div class="modal-body"><div class="te"></div>
        <?php print $content['rdforms_actions']; ?>
      </div>
<!--      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        <button type="button" class="btn btn-primary">Save changes</button>
      </div>-->
    </div>
  </div>
</div>

<!-- Modal Create Form -->
<div class="modal fade" id="DeleteTreatment" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <h3 class="modal-title" id="myModalLabel">
          <?php print t('Delete Treatment'); ?>
        </h3>
      </div>
      <div class="modal-body"><div class="te"></div>
        <h4> <?php print t('Are you sure you want to delete this treatment?'); ?>
        </h4>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-primary" data-dismiss="modal">No</button>
        <a type="button" class="btn btn-default" href="<?php print '/delete_' . $path; ?>">Yes</a>
      </div>
    </div>
  </div>
</div>
