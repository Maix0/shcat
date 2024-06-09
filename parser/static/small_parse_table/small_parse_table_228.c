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
	v->a[22800] = anon_sym_GT_GT;
	v->a[22801] = anon_sym_AMP_GT;
	v->a[22802] = anon_sym_AMP_GT_GT;
	v->a[22803] = anon_sym_LT_AMP;
	v->a[22804] = anon_sym_GT_AMP;
	v->a[22805] = anon_sym_GT_PIPE;
	v->a[22806] = anon_sym_LT_AMP_DASH;
	v->a[22807] = anon_sym_GT_AMP_DASH;
	v->a[22808] = anon_sym_LT_LT;
	v->a[22809] = anon_sym_LT_LT_DASH;
	v->a[22810] = aux_sym_heredoc_redirect_token1;
	v->a[22811] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22812] = anon_sym_AMP;
	v->a[22813] = anon_sym_DOLLAR;
	v->a[22814] = anon_sym_DQUOTE;
	v->a[22815] = sym_raw_string;
	v->a[22816] = aux_sym_number_token1;
	v->a[22817] = aux_sym_number_token2;
	v->a[22818] = anon_sym_DOLLAR_LBRACE;
	v->a[22819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = anon_sym_BQUOTE;
	v->a[22821] = sym_word;
	v->a[22822] = anon_sym_SEMI;
	v->a[22823] = 5;
	v->a[22824] = actions(3);
	v->a[22825] = 1;
	v->a[22826] = sym_comment;
	v->a[22827] = state(207);
	v->a[22828] = 2;
	v->a[22829] = sym_concatenation;
	v->a[22830] = aux_sym_for_statement_repeat1;
	v->a[22831] = actions(555);
	v->a[22832] = 3;
	v->a[22833] = sym_file_descriptor;
	v->a[22834] = sym_variable_name;
	v->a[22835] = ts_builtin_sym_end;
	v->a[22836] = state(329);
	v->a[22837] = 6;
	v->a[22838] = sym_arithmetic_expansion;
	v->a[22839] = sym_string;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = sym_number;
	v->a[22841] = sym_simple_expansion;
	v->a[22842] = sym_expansion;
	v->a[22843] = sym_command_substitution;
	v->a[22844] = actions(553);
	v->a[22845] = 29;
	v->a[22846] = anon_sym_PIPE;
	v->a[22847] = anon_sym_SEMI_SEMI;
	v->a[22848] = anon_sym_AMP_AMP;
	v->a[22849] = anon_sym_PIPE_PIPE;
	v->a[22850] = anon_sym_LT;
	v->a[22851] = anon_sym_GT;
	v->a[22852] = anon_sym_GT_GT;
	v->a[22853] = anon_sym_AMP_GT;
	v->a[22854] = anon_sym_AMP_GT_GT;
	v->a[22855] = anon_sym_LT_AMP;
	v->a[22856] = anon_sym_GT_AMP;
	v->a[22857] = anon_sym_GT_PIPE;
	v->a[22858] = anon_sym_LT_AMP_DASH;
	v->a[22859] = anon_sym_GT_AMP_DASH;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = anon_sym_LT_LT;
	v->a[22861] = anon_sym_LT_LT_DASH;
	v->a[22862] = aux_sym_heredoc_redirect_token1;
	v->a[22863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22864] = anon_sym_AMP;
	v->a[22865] = anon_sym_DOLLAR;
	v->a[22866] = anon_sym_DQUOTE;
	v->a[22867] = sym_raw_string;
	v->a[22868] = aux_sym_number_token1;
	v->a[22869] = aux_sym_number_token2;
	v->a[22870] = anon_sym_DOLLAR_LBRACE;
	v->a[22871] = anon_sym_DOLLAR_LPAREN;
	v->a[22872] = anon_sym_BQUOTE;
	v->a[22873] = sym_word;
	v->a[22874] = anon_sym_SEMI;
	v->a[22875] = 16;
	v->a[22876] = actions(3);
	v->a[22877] = 1;
	v->a[22878] = sym_comment;
	v->a[22879] = actions(485);
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = 1;
	v->a[22881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22882] = actions(487);
	v->a[22883] = 1;
	v->a[22884] = anon_sym_DOLLAR;
	v->a[22885] = actions(489);
	v->a[22886] = 1;
	v->a[22887] = anon_sym_DQUOTE;
	v->a[22888] = actions(491);
	v->a[22889] = 1;
	v->a[22890] = aux_sym_number_token1;
	v->a[22891] = actions(493);
	v->a[22892] = 1;
	v->a[22893] = aux_sym_number_token2;
	v->a[22894] = actions(495);
	v->a[22895] = 1;
	v->a[22896] = anon_sym_DOLLAR_LBRACE;
	v->a[22897] = actions(497);
	v->a[22898] = 1;
	v->a[22899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
