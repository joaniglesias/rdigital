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
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
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
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
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
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body">
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>
</div>

<!-- Treatment Region -->
<?php $reg_machine_name='treatment'; ?>
<div class="panel panel-danger">
  <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
    <div class="pull-right">
      <a class="btn btn-danger btn-lg" href="<?php print $patient_nid; ?>/create-treatment">
        <?php print t('Create Treatment'); ?>
      </a>
    </div>
    <h4 class="panel-title" style="margin-top: 7.5px;">
      <?php print t('Treatment'); ?>
    </h4>
  </div>
</div>
<?php //dpm(get_defined_vars()); ?>

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

