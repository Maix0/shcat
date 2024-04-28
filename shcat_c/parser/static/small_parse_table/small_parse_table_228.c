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
	v->a[22800] = sym_word;
	v->a[22801] = 8;
	v->a[22802] = actions(3);
	v->a[22803] = 1;
	v->a[22804] = sym_comment;
	v->a[22805] = actions(1555);
	v->a[22806] = 1;
	v->a[22807] = anon_sym_DQUOTE;
	v->a[22808] = actions(2070);
	v->a[22809] = 1;
	v->a[22810] = sym_variable_name;
	v->a[22811] = state(1176);
	v->a[22812] = 1;
	v->a[22813] = sym_string;
	v->a[22814] = actions(2068);
	v->a[22815] = 2;
	v->a[22816] = aux_sym__simple_variable_name_token1;
	v->a[22817] = aux_sym__multiline_variable_name_token1;
	v->a[22818] = actions(1241);
	v->a[22819] = 4;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = sym_file_descriptor;
	v->a[22821] = sym_test_operator;
	v->a[22822] = sym__bare_dollar;
	v->a[22823] = sym__brace_start;
	v->a[22824] = actions(2066);
	v->a[22825] = 9;
	v->a[22826] = anon_sym_DASH;
	v->a[22827] = anon_sym_STAR;
	v->a[22828] = anon_sym_BANG;
	v->a[22829] = anon_sym_QMARK;
	v->a[22830] = anon_sym_DOLLAR;
	v->a[22831] = anon_sym_POUND;
	v->a[22832] = anon_sym_AT2;
	v->a[22833] = anon_sym_0;
	v->a[22834] = anon_sym__;
	v->a[22835] = actions(1239);
	v->a[22836] = 35;
	v->a[22837] = anon_sym_LPAREN_LPAREN;
	v->a[22838] = anon_sym_PIPE_PIPE;
	v->a[22839] = anon_sym_AMP_AMP;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = anon_sym_PIPE;
	v->a[22841] = anon_sym_EQ_EQ;
	v->a[22842] = anon_sym_LT;
	v->a[22843] = anon_sym_GT;
	v->a[22844] = anon_sym_LT_LT;
	v->a[22845] = anon_sym_GT_GT;
	v->a[22846] = anon_sym_PIPE_AMP;
	v->a[22847] = anon_sym_EQ_TILDE;
	v->a[22848] = anon_sym_AMP_GT;
	v->a[22849] = anon_sym_AMP_GT_GT;
	v->a[22850] = anon_sym_LT_AMP;
	v->a[22851] = anon_sym_GT_AMP;
	v->a[22852] = anon_sym_GT_PIPE;
	v->a[22853] = anon_sym_LT_AMP_DASH;
	v->a[22854] = anon_sym_GT_AMP_DASH;
	v->a[22855] = anon_sym_LT_LT_DASH;
	v->a[22856] = aux_sym_heredoc_redirect_token1;
	v->a[22857] = anon_sym_LT_LT_LT;
	v->a[22858] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22859] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = sym__special_character;
	v->a[22861] = sym_raw_string;
	v->a[22862] = sym_ansi_c_string;
	v->a[22863] = aux_sym_number_token1;
	v->a[22864] = aux_sym_number_token2;
	v->a[22865] = anon_sym_DOLLAR_LBRACE;
	v->a[22866] = anon_sym_DOLLAR_LPAREN;
	v->a[22867] = anon_sym_BQUOTE;
	v->a[22868] = anon_sym_DOLLAR_BQUOTE;
	v->a[22869] = anon_sym_LT_LPAREN;
	v->a[22870] = anon_sym_GT_LPAREN;
	v->a[22871] = sym_word;
	v->a[22872] = 30;
	v->a[22873] = actions(3);
	v->a[22874] = 1;
	v->a[22875] = sym_comment;
	v->a[22876] = actions(3727);
	v->a[22877] = 1;
	v->a[22878] = anon_sym_LT_LT_LT;
	v->a[22879] = actions(3729);
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = 1;
	v->a[22881] = anon_sym_DOLLAR_LBRACK;
	v->a[22882] = actions(3731);
	v->a[22883] = 1;
	v->a[22884] = anon_sym_DOLLAR;
	v->a[22885] = actions(3733);
	v->a[22886] = 1;
	v->a[22887] = sym__special_character;
	v->a[22888] = actions(3735);
	v->a[22889] = 1;
	v->a[22890] = anon_sym_DQUOTE;
	v->a[22891] = actions(3737);
	v->a[22892] = 1;
	v->a[22893] = aux_sym_number_token1;
	v->a[22894] = actions(3739);
	v->a[22895] = 1;
	v->a[22896] = aux_sym_number_token2;
	v->a[22897] = actions(3741);
	v->a[22898] = 1;
	v->a[22899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
