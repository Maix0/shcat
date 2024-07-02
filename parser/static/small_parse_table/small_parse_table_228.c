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
	v->a[22800] = actions(540);
	v->a[22801] = 1;
	v->a[22802] = sym_file_descriptor;
	v->a[22803] = actions(801);
	v->a[22804] = 1;
	v->a[22805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22806] = actions(804);
	v->a[22807] = 1;
	v->a[22808] = anon_sym_DOLLAR;
	v->a[22809] = actions(807);
	v->a[22810] = 1;
	v->a[22811] = anon_sym_DQUOTE;
	v->a[22812] = actions(810);
	v->a[22813] = 1;
	v->a[22814] = anon_sym_DOLLAR_LBRACE;
	v->a[22815] = actions(813);
	v->a[22816] = 1;
	v->a[22817] = anon_sym_DOLLAR_LPAREN;
	v->a[22818] = actions(816);
	v->a[22819] = 1;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = anon_sym_BQUOTE;
	v->a[22821] = state(241);
	v->a[22822] = 2;
	v->a[22823] = sym_concatenation;
	v->a[22824] = aux_sym_for_statement_repeat1;
	v->a[22825] = actions(798);
	v->a[22826] = 3;
	v->a[22827] = sym_raw_string;
	v->a[22828] = sym_number;
	v->a[22829] = sym_word;
	v->a[22830] = state(476);
	v->a[22831] = 5;
	v->a[22832] = sym_arithmetic_expansion;
	v->a[22833] = sym_string;
	v->a[22834] = sym_simple_expansion;
	v->a[22835] = sym_expansion;
	v->a[22836] = sym_command_substitution;
	v->a[22837] = actions(520);
	v->a[22838] = 17;
	v->a[22839] = anon_sym_PIPE;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = anon_sym_RPAREN;
	v->a[22841] = anon_sym_SEMI_SEMI;
	v->a[22842] = anon_sym_AMP_AMP;
	v->a[22843] = anon_sym_PIPE_PIPE;
	v->a[22844] = anon_sym_LT;
	v->a[22845] = anon_sym_GT;
	v->a[22846] = anon_sym_GT_GT;
	v->a[22847] = anon_sym_LT_AMP;
	v->a[22848] = anon_sym_GT_AMP;
	v->a[22849] = anon_sym_GT_PIPE;
	v->a[22850] = anon_sym_LT_GT;
	v->a[22851] = anon_sym_LT_LT;
	v->a[22852] = anon_sym_LT_LT_DASH;
	v->a[22853] = aux_sym_heredoc_redirect_token1;
	v->a[22854] = anon_sym_AMP;
	v->a[22855] = anon_sym_SEMI;
	v->a[22856] = 12;
	v->a[22857] = actions(3);
	v->a[22858] = 1;
	v->a[22859] = sym_comment;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = actions(515);
	v->a[22861] = 1;
	v->a[22862] = sym_file_descriptor;
	v->a[22863] = actions(821);
	v->a[22864] = 1;
	v->a[22865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22866] = actions(823);
	v->a[22867] = 1;
	v->a[22868] = anon_sym_DOLLAR;
	v->a[22869] = actions(825);
	v->a[22870] = 1;
	v->a[22871] = anon_sym_DQUOTE;
	v->a[22872] = actions(827);
	v->a[22873] = 1;
	v->a[22874] = anon_sym_DOLLAR_LBRACE;
	v->a[22875] = actions(829);
	v->a[22876] = 1;
	v->a[22877] = anon_sym_DOLLAR_LPAREN;
	v->a[22878] = actions(831);
	v->a[22879] = 1;
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = anon_sym_BQUOTE;
	v->a[22881] = state(241);
	v->a[22882] = 2;
	v->a[22883] = sym_concatenation;
	v->a[22884] = aux_sym_for_statement_repeat1;
	v->a[22885] = actions(819);
	v->a[22886] = 3;
	v->a[22887] = sym_raw_string;
	v->a[22888] = sym_number;
	v->a[22889] = sym_word;
	v->a[22890] = state(476);
	v->a[22891] = 5;
	v->a[22892] = sym_arithmetic_expansion;
	v->a[22893] = sym_string;
	v->a[22894] = sym_simple_expansion;
	v->a[22895] = sym_expansion;
	v->a[22896] = sym_command_substitution;
	v->a[22897] = actions(513);
	v->a[22898] = 17;
	v->a[22899] = anon_sym_PIPE;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
