/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_248.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1240(t_small_parse_table_array *v)
{
	v->a[24800] = sym_arithmetic_expansion;
	v->a[24801] = sym_string;
	v->a[24802] = sym_number;
	v->a[24803] = sym_simple_expansion;
	v->a[24804] = sym_expansion;
	v->a[24805] = sym_command_substitution;
	v->a[24806] = actions(748);
	v->a[24807] = 29;
	v->a[24808] = anon_sym_PIPE;
	v->a[24809] = anon_sym_SEMI_SEMI;
	v->a[24810] = anon_sym_AMP_AMP;
	v->a[24811] = anon_sym_PIPE_PIPE;
	v->a[24812] = anon_sym_LT;
	v->a[24813] = anon_sym_GT;
	v->a[24814] = anon_sym_GT_GT;
	v->a[24815] = anon_sym_AMP_GT;
	v->a[24816] = anon_sym_AMP_GT_GT;
	v->a[24817] = anon_sym_LT_AMP;
	v->a[24818] = anon_sym_GT_AMP;
	v->a[24819] = anon_sym_GT_PIPE;
	small_parse_table_1241(v);
}

void	small_parse_table_1241(t_small_parse_table_array *v)
{
	v->a[24820] = anon_sym_LT_AMP_DASH;
	v->a[24821] = anon_sym_GT_AMP_DASH;
	v->a[24822] = anon_sym_LT_LT;
	v->a[24823] = anon_sym_LT_LT_DASH;
	v->a[24824] = aux_sym_heredoc_redirect_token1;
	v->a[24825] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24826] = anon_sym_AMP;
	v->a[24827] = anon_sym_DOLLAR;
	v->a[24828] = anon_sym_DQUOTE;
	v->a[24829] = sym_raw_string;
	v->a[24830] = aux_sym_number_token1;
	v->a[24831] = aux_sym_number_token2;
	v->a[24832] = anon_sym_DOLLAR_LBRACE;
	v->a[24833] = anon_sym_DOLLAR_LPAREN;
	v->a[24834] = anon_sym_BQUOTE;
	v->a[24835] = sym_word;
	v->a[24836] = anon_sym_SEMI;
	v->a[24837] = 14;
	v->a[24838] = actions(3);
	v->a[24839] = 1;
	small_parse_table_1242(v);
}

void	small_parse_table_1242(t_small_parse_table_array *v)
{
	v->a[24840] = sym_comment;
	v->a[24841] = actions(662);
	v->a[24842] = 1;
	v->a[24843] = sym_file_descriptor;
	v->a[24844] = actions(846);
	v->a[24845] = 1;
	v->a[24846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24847] = actions(849);
	v->a[24848] = 1;
	v->a[24849] = anon_sym_DOLLAR;
	v->a[24850] = actions(852);
	v->a[24851] = 1;
	v->a[24852] = anon_sym_DQUOTE;
	v->a[24853] = actions(855);
	v->a[24854] = 1;
	v->a[24855] = aux_sym_number_token1;
	v->a[24856] = actions(858);
	v->a[24857] = 1;
	v->a[24858] = aux_sym_number_token2;
	v->a[24859] = actions(861);
	small_parse_table_1243(v);
}

void	small_parse_table_1243(t_small_parse_table_array *v)
{
	v->a[24860] = 1;
	v->a[24861] = anon_sym_DOLLAR_LBRACE;
	v->a[24862] = actions(864);
	v->a[24863] = 1;
	v->a[24864] = anon_sym_DOLLAR_LPAREN;
	v->a[24865] = actions(867);
	v->a[24866] = 1;
	v->a[24867] = anon_sym_BQUOTE;
	v->a[24868] = actions(843);
	v->a[24869] = 2;
	v->a[24870] = sym_raw_string;
	v->a[24871] = sym_word;
	v->a[24872] = state(228);
	v->a[24873] = 2;
	v->a[24874] = sym_concatenation;
	v->a[24875] = aux_sym_for_statement_repeat1;
	v->a[24876] = state(541);
	v->a[24877] = 6;
	v->a[24878] = sym_arithmetic_expansion;
	v->a[24879] = sym_string;
	small_parse_table_1244(v);
}

void	small_parse_table_1244(t_small_parse_table_array *v)
{
	v->a[24880] = sym_number;
	v->a[24881] = sym_simple_expansion;
	v->a[24882] = sym_expansion;
	v->a[24883] = sym_command_substitution;
	v->a[24884] = actions(636);
	v->a[24885] = 20;
	v->a[24886] = anon_sym_PIPE;
	v->a[24887] = anon_sym_RPAREN;
	v->a[24888] = anon_sym_SEMI_SEMI;
	v->a[24889] = anon_sym_AMP_AMP;
	v->a[24890] = anon_sym_PIPE_PIPE;
	v->a[24891] = anon_sym_LT;
	v->a[24892] = anon_sym_GT;
	v->a[24893] = anon_sym_GT_GT;
	v->a[24894] = anon_sym_AMP_GT;
	v->a[24895] = anon_sym_AMP_GT_GT;
	v->a[24896] = anon_sym_LT_AMP;
	v->a[24897] = anon_sym_GT_AMP;
	v->a[24898] = anon_sym_GT_PIPE;
	v->a[24899] = anon_sym_LT_AMP_DASH;
	small_parse_table_1245(v);
}

/* EOF small_parse_table_248.c */
