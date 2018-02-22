<?php
/**
 * @file
 * Displays the Simple Google Maps formatter.
 *
 * Available variables:
 * - $include_map: TRUE if an embedded dynamic map should be displayed.
 * - $include_static_map: TRUE if an embedded static map should be displayed.
 * - $width: Width of embedded map.
 * - $height: Height of embedded map.
 * - $include_link: TRUE if a link to a map should be displayed.
 * - $link_text: Text of link to display.
 * - $url_suffix: Suffix of URLs to send to Google Maps for embedded and linked
 *   maps. Contains the URL-encoded address.
 * - $zoom: Zoom level for embedded and linked maps.
 * - $information_bubble: TRUE if an information bubble should be displayed on
 *   maps. Note that in the Google Maps URLs, you need to send iwloc=A to use
 *   a bubble, and iwloc=near to omit the bubble.
 * - $address_text: Address text to display (empty if it should not be
 *   displayed).
 * - $map_type: Type of map to use (Google code, such as 'm' or 't').
 * - $langcode: Two-letter language code to use.
 * - $static_map_type: Type of map to use for static map (Google code, such as
 *  'roadmap' or 'satellite')
 *
 * @ingroup themeable
 */
?>

  <div class="thumbnail card-portrait center-block clearfix">
    <?php if ($include_map): ?>
        <iframe width="<?php print $width; ?>" height="<?php print $height; ?>" frameborder="0" scrolling="no" marginheight="0" marginwidth="0" src="https://maps.google.com/maps?hl=<?php print $langcode; ?>&amp;q=<?php print $url_suffix; ?>&amp;z=<?php print $zoom; ?>&amp;t=<?php print $map_type; ?>&amp;output=embed"></iframe>
    <?php endif; ?>

    <?php if ($include_static_map):
        $static_w = (int) $width;
        $static_h = (int) $height;
        $static_s = (int) $static_scale;
      ?>

        <div class="simple-gmap-static-map">
            <img src="https://maps.googleapis.com/maps/api/staticmap?size=<?php print $static_w; ?>x<?php print $static_h; ?>&amp;scale=<?php print $static_s; ?>&amp;zoom=<?php print $zoom; ?>&amp;language=<?php print $langcode; ?>&amp;maptype=<?php print $static_map_type; ?>&amp;markers=color:red|<?php print $url_suffix; ?>&amp;sensor=false&amp;key=<?php print $apikey; ?>" />
        </div>

    <?php endif; ?>

    <div class="caption">
      <?php if ($include_link) : ?>
          <p class="simple-gmap-link"><a href="https://maps.google.com/maps?q=<?php print $url_suffix; ?>&amp;hl=<?php print $langcode; ?>&amp;z=<?php print $zoom; ?>&amp;t=<?php print $map_type; ?>" target="_blank"><?php print $link_text; ?></a></p>
      <?php endif; ?>

      <?php if (!empty($address_text)): ?>
          <p class="simple-gmap-address"><?php print $address_text; ?></p>
      <?php endif; ?>
    </div>
  </div>
