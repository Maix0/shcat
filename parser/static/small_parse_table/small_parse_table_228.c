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
	v->a[22800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22801] = anon_sym_AMP;
	v->a[22802] = aux_sym_concatenation_token1;
	v->a[22803] = anon_sym_DOLLAR;
	v->a[22804] = sym__special_character;
	v->a[22805] = anon_sym_DQUOTE;
	v->a[22806] = sym_raw_string;
	v->a[22807] = aux_sym_number_token1;
	v->a[22808] = aux_sym_number_token2;
	v->a[22809] = anon_sym_DOLLAR_LBRACE;
	v->a[22810] = anon_sym_DOLLAR_LPAREN;
	v->a[22811] = anon_sym_BQUOTE;
	v->a[22812] = anon_sym_DOLLAR_BQUOTE;
	v->a[22813] = sym_word;
	v->a[22814] = anon_sym_SEMI;
	v->a[22815] = 8;
	v->a[22816] = actions(3);
	v->a[22817] = 1;
	v->a[22818] = sym_comment;
	v->a[22819] = actions(2949);
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = 1;
	v->a[22821] = sym_variable_name;
	v->a[22822] = actions(2526);
	v->a[22823] = 2;
	v->a[22824] = sym_test_operator;
	v->a[22825] = sym__brace_start;
	v->a[22826] = state(2128);
	v->a[22827] = 2;
	v->a[22828] = sym_variable_assignment;
	v->a[22829] = aux_sym_variable_assignments_repeat1;
	v->a[22830] = actions(2638);
	v->a[22831] = 3;
	v->a[22832] = sym_file_descriptor;
	v->a[22833] = ts_builtin_sym_end;
	v->a[22834] = aux_sym_heredoc_redirect_token1;
	v->a[22835] = state(2129);
	v->a[22836] = 3;
	v->a[22837] = sym_file_redirect;
	v->a[22838] = sym_heredoc_redirect;
	v->a[22839] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = actions(2512);
	v->a[22841] = 12;
	v->a[22842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22843] = anon_sym_DOLLAR;
	v->a[22844] = sym__special_character;
	v->a[22845] = anon_sym_DQUOTE;
	v->a[22846] = sym_raw_string;
	v->a[22847] = aux_sym_number_token1;
	v->a[22848] = aux_sym_number_token2;
	v->a[22849] = anon_sym_DOLLAR_LBRACE;
	v->a[22850] = anon_sym_DOLLAR_LPAREN;
	v->a[22851] = anon_sym_BQUOTE;
	v->a[22852] = anon_sym_DOLLAR_BQUOTE;
	v->a[22853] = sym_word;
	v->a[22854] = actions(2516);
	v->a[22855] = 19;
	v->a[22856] = anon_sym_PIPE;
	v->a[22857] = anon_sym_SEMI_SEMI;
	v->a[22858] = anon_sym_PIPE_AMP;
	v->a[22859] = anon_sym_AMP_AMP;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = anon_sym_PIPE_PIPE;
	v->a[22861] = anon_sym_LT;
	v->a[22862] = anon_sym_GT;
	v->a[22863] = anon_sym_GT_GT;
	v->a[22864] = anon_sym_AMP_GT;
	v->a[22865] = anon_sym_AMP_GT_GT;
	v->a[22866] = anon_sym_LT_AMP;
	v->a[22867] = anon_sym_GT_AMP;
	v->a[22868] = anon_sym_GT_PIPE;
	v->a[22869] = anon_sym_LT_AMP_DASH;
	v->a[22870] = anon_sym_GT_AMP_DASH;
	v->a[22871] = anon_sym_LT_LT;
	v->a[22872] = anon_sym_LT_LT_DASH;
	v->a[22873] = anon_sym_AMP;
	v->a[22874] = anon_sym_SEMI;
	v->a[22875] = 6;
	v->a[22876] = actions(3);
	v->a[22877] = 1;
	v->a[22878] = sym_comment;
	v->a[22879] = actions(2952);
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = 1;
	v->a[22881] = aux_sym_concatenation_token1;
	v->a[22882] = actions(3042);
	v->a[22883] = 1;
	v->a[22884] = sym__concat;
	v->a[22885] = state(594);
	v->a[22886] = 1;
	v->a[22887] = aux_sym_concatenation_repeat1;
	v->a[22888] = actions(2664);
	v->a[22889] = 5;
	v->a[22890] = sym_file_descriptor;
	v->a[22891] = sym_test_operator;
	v->a[22892] = sym__bare_dollar;
	v->a[22893] = sym__brace_start;
	v->a[22894] = aux_sym_heredoc_redirect_token1;
	v->a[22895] = actions(2662);
	v->a[22896] = 34;
	v->a[22897] = anon_sym_esac;
	v->a[22898] = anon_sym_PIPE;
	v->a[22899] = anon_sym_SEMI_SEMI;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
