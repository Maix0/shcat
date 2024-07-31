/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_228.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1140(t_small_parse_table_array *v)
{
	v->a[22800] = state(929);
	v->a[22801] = 2;
	v->a[22802] = sym_variable_assignment;
	v->a[22803] = aux_sym__variable_assignments_repeat1;
	v->a[22804] = state(931);
	v->a[22805] = 3;
	v->a[22806] = sym_file_redirect;
	v->a[22807] = sym_heredoc_redirect;
	v->a[22808] = aux_sym_redirected_statement_repeat1;
	v->a[22809] = actions(742);
	v->a[22810] = 16;
	v->a[22811] = anon_sym_LT;
	v->a[22812] = anon_sym_GT;
	v->a[22813] = anon_sym_GT_GT;
	v->a[22814] = anon_sym_LT_AMP;
	v->a[22815] = anon_sym_GT_AMP;
	v->a[22816] = anon_sym_GT_PIPE;
	v->a[22817] = anon_sym_LT_GT;
	v->a[22818] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22819] = anon_sym_DOLLAR;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = anon_sym_DQUOTE;
	v->a[22821] = sym_raw_string;
	v->a[22822] = sym_number;
	v->a[22823] = anon_sym_DOLLAR_LBRACE;
	v->a[22824] = anon_sym_DOLLAR_LPAREN;
	v->a[22825] = anon_sym_BQUOTE;
	v->a[22826] = sym_word;
	v->a[22827] = 5;
	v->a[22828] = actions(3);
	v->a[22829] = 1;
	v->a[22830] = sym_comment;
	v->a[22831] = actions(399);
	v->a[22832] = 1;
	v->a[22833] = sym_variable_name;
	v->a[22834] = actions(397);
	v->a[22835] = 2;
	v->a[22836] = aux_sym__simple_variable_name_token1;
	v->a[22837] = aux_sym__multiline_variable_name_token1;
	v->a[22838] = actions(395);
	v->a[22839] = 8;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = anon_sym_BANG;
	v->a[22841] = anon_sym_DASH;
	v->a[22842] = anon_sym_STAR;
	v->a[22843] = anon_sym_QMARK;
	v->a[22844] = anon_sym_DOLLAR;
	v->a[22845] = anon_sym_POUND;
	v->a[22846] = anon_sym_AT;
	v->a[22847] = anon_sym_0;
	v->a[22848] = actions(345);
	v->a[22849] = 21;
	v->a[22850] = anon_sym_PIPE;
	v->a[22851] = anon_sym_AMP_AMP;
	v->a[22852] = anon_sym_PIPE_PIPE;
	v->a[22853] = anon_sym_LT;
	v->a[22854] = anon_sym_GT;
	v->a[22855] = anon_sym_GT_GT;
	v->a[22856] = anon_sym_LT_AMP;
	v->a[22857] = anon_sym_GT_AMP;
	v->a[22858] = anon_sym_GT_PIPE;
	v->a[22859] = anon_sym_LT_GT;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = anon_sym_LT_LT;
	v->a[22861] = anon_sym_LT_LT_DASH;
	v->a[22862] = aux_sym_heredoc_redirect_token1;
	v->a[22863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22864] = anon_sym_DQUOTE;
	v->a[22865] = sym_raw_string;
	v->a[22866] = sym_number;
	v->a[22867] = anon_sym_DOLLAR_LBRACE;
	v->a[22868] = anon_sym_DOLLAR_LPAREN;
	v->a[22869] = anon_sym_BQUOTE;
	v->a[22870] = sym_word;
	v->a[22871] = 11;
	v->a[22872] = actions(3);
	v->a[22873] = 1;
	v->a[22874] = sym_comment;
	v->a[22875] = actions(746);
	v->a[22876] = 1;
	v->a[22877] = anon_sym_PIPE;
	v->a[22878] = actions(844);
	v->a[22879] = 1;
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = ts_builtin_sym_end;
	v->a[22881] = actions(852);
	v->a[22882] = 1;
	v->a[22883] = sym_variable_name;
	v->a[22884] = state(580);
	v->a[22885] = 1;
	v->a[22886] = sym_terminator;
	v->a[22887] = actions(848);
	v->a[22888] = 2;
	v->a[22889] = anon_sym_AMP_AMP;
	v->a[22890] = anon_sym_PIPE_PIPE;
	v->a[22891] = actions(850);
	v->a[22892] = 2;
	v->a[22893] = anon_sym_LT_LT;
	v->a[22894] = anon_sym_LT_LT_DASH;
	v->a[22895] = state(919);
	v->a[22896] = 2;
	v->a[22897] = sym_variable_assignment;
	v->a[22898] = aux_sym__variable_assignments_repeat1;
	v->a[22899] = actions(846);
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
