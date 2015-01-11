<!-- Patient Region -->
<?php $reg_machine_name='patient'; ?>
<div class="panel panel-primary">
  <div class="panel-heading" >
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
      <a class="btn btn-primary pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
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
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body">
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
      <div class="panel-body">
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
      <div class="panel-body">
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>
</div>
<?php //dpm(get_defined_vars()); ?>
