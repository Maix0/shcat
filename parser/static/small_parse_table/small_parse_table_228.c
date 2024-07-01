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
	v->a[22800] = actions(833);
	v->a[22801] = 1;
	v->a[22802] = anon_sym_DOLLAR_LBRACE;
	v->a[22803] = actions(836);
	v->a[22804] = 1;
	v->a[22805] = anon_sym_DOLLAR_LPAREN;
	v->a[22806] = actions(839);
	v->a[22807] = 1;
	v->a[22808] = anon_sym_BQUOTE;
	v->a[22809] = state(240);
	v->a[22810] = 2;
	v->a[22811] = sym_concatenation;
	v->a[22812] = aux_sym_for_statement_repeat1;
	v->a[22813] = actions(821);
	v->a[22814] = 3;
	v->a[22815] = sym_raw_string;
	v->a[22816] = sym_number;
	v->a[22817] = sym_word;
	v->a[22818] = state(485);
	v->a[22819] = 5;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = sym_arithmetic_expansion;
	v->a[22821] = sym_string;
	v->a[22822] = sym_simple_expansion;
	v->a[22823] = sym_expansion;
	v->a[22824] = sym_command_substitution;
	v->a[22825] = actions(504);
	v->a[22826] = 17;
	v->a[22827] = anon_sym_PIPE;
	v->a[22828] = anon_sym_RPAREN;
	v->a[22829] = anon_sym_SEMI_SEMI;
	v->a[22830] = anon_sym_AMP_AMP;
	v->a[22831] = anon_sym_PIPE_PIPE;
	v->a[22832] = anon_sym_LT;
	v->a[22833] = anon_sym_GT;
	v->a[22834] = anon_sym_GT_GT;
	v->a[22835] = anon_sym_LT_AMP;
	v->a[22836] = anon_sym_GT_AMP;
	v->a[22837] = anon_sym_GT_PIPE;
	v->a[22838] = anon_sym_LT_GT;
	v->a[22839] = anon_sym_LT_LT;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = anon_sym_LT_LT_DASH;
	v->a[22841] = aux_sym_heredoc_redirect_token1;
	v->a[22842] = anon_sym_AMP;
	v->a[22843] = anon_sym_SEMI;
	v->a[22844] = 14;
	v->a[22845] = actions(3);
	v->a[22846] = 1;
	v->a[22847] = sym_comment;
	v->a[22848] = actions(459);
	v->a[22849] = 1;
	v->a[22850] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22851] = actions(461);
	v->a[22852] = 1;
	v->a[22853] = anon_sym_DOLLAR;
	v->a[22854] = actions(463);
	v->a[22855] = 1;
	v->a[22856] = anon_sym_DQUOTE;
	v->a[22857] = actions(465);
	v->a[22858] = 1;
	v->a[22859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = actions(467);
	v->a[22861] = 1;
	v->a[22862] = anon_sym_DOLLAR_LPAREN;
	v->a[22863] = actions(469);
	v->a[22864] = 1;
	v->a[22865] = anon_sym_BQUOTE;
	v->a[22866] = actions(471);
	v->a[22867] = 1;
	v->a[22868] = sym__bare_dollar;
	v->a[22869] = actions(558);
	v->a[22870] = 1;
	v->a[22871] = sym_file_descriptor;
	v->a[22872] = state(235);
	v->a[22873] = 1;
	v->a[22874] = aux_sym_command_repeat2;
	v->a[22875] = state(627);
	v->a[22876] = 1;
	v->a[22877] = sym_concatenation;
	v->a[22878] = actions(493);
	v->a[22879] = 3;
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = sym_raw_string;
	v->a[22881] = sym_number;
	v->a[22882] = sym_word;
	v->a[22883] = state(469);
	v->a[22884] = 5;
	v->a[22885] = sym_arithmetic_expansion;
	v->a[22886] = sym_string;
	v->a[22887] = sym_simple_expansion;
	v->a[22888] = sym_expansion;
	v->a[22889] = sym_command_substitution;
	v->a[22890] = actions(556);
	v->a[22891] = 16;
	v->a[22892] = anon_sym_PIPE;
	v->a[22893] = anon_sym_SEMI_SEMI;
	v->a[22894] = anon_sym_AMP_AMP;
	v->a[22895] = anon_sym_PIPE_PIPE;
	v->a[22896] = anon_sym_LT;
	v->a[22897] = anon_sym_GT;
	v->a[22898] = anon_sym_GT_GT;
	v->a[22899] = anon_sym_LT_AMP;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
