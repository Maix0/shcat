/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_838.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4190(t_small_parse_table_array *v)
{
	v->a[83800] = actions(3187);
	v->a[83801] = 9;
	v->a[83802] = anon_sym_BANG;
	v->a[83803] = anon_sym_DASH;
	v->a[83804] = anon_sym_STAR;
	v->a[83805] = anon_sym_QMARK;
	v->a[83806] = anon_sym_DOLLAR;
	v->a[83807] = anon_sym_POUND;
	v->a[83808] = anon_sym_AT;
	v->a[83809] = anon_sym_0;
	v->a[83810] = anon_sym__;
	v->a[83811] = 3;
	v->a[83812] = actions(870);
	v->a[83813] = 1;
	v->a[83814] = sym_comment;
	v->a[83815] = actions(2395);
	v->a[83816] = 6;
	v->a[83817] = anon_sym_PIPE;
	v->a[83818] = anon_sym_LT;
	v->a[83819] = anon_sym_GT;
	small_parse_table_4191(v);
}

void	small_parse_table_4191(t_small_parse_table_array *v)
{
	v->a[83820] = anon_sym_LT_AMP;
	v->a[83821] = anon_sym_GT_AMP;
	v->a[83822] = anon_sym_LT_LT;
	v->a[83823] = actions(2393);
	v->a[83824] = 8;
	v->a[83825] = sym_file_descriptor;
	v->a[83826] = anon_sym_AMP_AMP;
	v->a[83827] = anon_sym_PIPE_PIPE;
	v->a[83828] = anon_sym_GT_GT;
	v->a[83829] = anon_sym_GT_PIPE;
	v->a[83830] = anon_sym_LT_AMP_DASH;
	v->a[83831] = anon_sym_GT_AMP_DASH;
	v->a[83832] = anon_sym_LT_LT_DASH;
	v->a[83833] = 3;
	v->a[83834] = actions(870);
	v->a[83835] = 1;
	v->a[83836] = sym_comment;
	v->a[83837] = actions(2391);
	v->a[83838] = 6;
	v->a[83839] = anon_sym_PIPE;
	small_parse_table_4192(v);
}

void	small_parse_table_4192(t_small_parse_table_array *v)
{
	v->a[83840] = anon_sym_LT;
	v->a[83841] = anon_sym_GT;
	v->a[83842] = anon_sym_LT_AMP;
	v->a[83843] = anon_sym_GT_AMP;
	v->a[83844] = anon_sym_LT_LT;
	v->a[83845] = actions(2389);
	v->a[83846] = 8;
	v->a[83847] = sym_file_descriptor;
	v->a[83848] = anon_sym_AMP_AMP;
	v->a[83849] = anon_sym_PIPE_PIPE;
	v->a[83850] = anon_sym_GT_GT;
	v->a[83851] = anon_sym_GT_PIPE;
	v->a[83852] = anon_sym_LT_AMP_DASH;
	v->a[83853] = anon_sym_GT_AMP_DASH;
	v->a[83854] = anon_sym_LT_LT_DASH;
	v->a[83855] = 6;
	v->a[83856] = actions(3);
	v->a[83857] = 1;
	v->a[83858] = sym_comment;
	v->a[83859] = actions(3191);
	small_parse_table_4193(v);
}

void	small_parse_table_4193(t_small_parse_table_array *v)
{
	v->a[83860] = 1;
	v->a[83861] = sym_string_content;
	v->a[83862] = actions(3195);
	v->a[83863] = 1;
	v->a[83864] = sym_variable_name;
	v->a[83865] = actions(3286);
	v->a[83866] = 1;
	v->a[83867] = anon_sym_DQUOTE;
	v->a[83868] = actions(3193);
	v->a[83869] = 2;
	v->a[83870] = aux_sym__simple_variable_name_token1;
	v->a[83871] = aux_sym__multiline_variable_name_token1;
	v->a[83872] = actions(3187);
	v->a[83873] = 9;
	v->a[83874] = anon_sym_BANG;
	v->a[83875] = anon_sym_DASH;
	v->a[83876] = anon_sym_STAR;
	v->a[83877] = anon_sym_QMARK;
	v->a[83878] = anon_sym_DOLLAR;
	v->a[83879] = anon_sym_POUND;
	small_parse_table_4194(v);
}

void	small_parse_table_4194(t_small_parse_table_array *v)
{
	v->a[83880] = anon_sym_AT;
	v->a[83881] = anon_sym_0;
	v->a[83882] = anon_sym__;
	v->a[83883] = 6;
	v->a[83884] = actions(3);
	v->a[83885] = 1;
	v->a[83886] = sym_comment;
	v->a[83887] = actions(3191);
	v->a[83888] = 1;
	v->a[83889] = sym_string_content;
	v->a[83890] = actions(3195);
	v->a[83891] = 1;
	v->a[83892] = sym_variable_name;
	v->a[83893] = actions(3288);
	v->a[83894] = 1;
	v->a[83895] = anon_sym_DQUOTE;
	v->a[83896] = actions(3193);
	v->a[83897] = 2;
	v->a[83898] = aux_sym__simple_variable_name_token1;
	v->a[83899] = aux_sym__multiline_variable_name_token1;
	small_parse_table_4195(v);
}

/* EOF small_parse_table_838.c */
