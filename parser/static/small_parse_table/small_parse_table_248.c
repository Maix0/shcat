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
	v->a[24800] = anon_sym_GT_GT;
	v->a[24801] = anon_sym_AMP_GT;
	v->a[24802] = anon_sym_AMP_GT_GT;
	v->a[24803] = anon_sym_LT_AMP;
	v->a[24804] = anon_sym_GT_AMP;
	v->a[24805] = anon_sym_GT_PIPE;
	v->a[24806] = 11;
	v->a[24807] = actions(3);
	v->a[24808] = 1;
	v->a[24809] = sym_comment;
	v->a[24810] = actions(548);
	v->a[24811] = 1;
	v->a[24812] = sym_file_descriptor;
	v->a[24813] = actions(718);
	v->a[24814] = 1;
	v->a[24815] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24816] = actions(720);
	v->a[24817] = 1;
	v->a[24818] = anon_sym_DOLLAR;
	v->a[24819] = actions(722);
	small_parse_table_1241(v);
}

void	small_parse_table_1241(t_small_parse_table_array *v)
{
	v->a[24820] = 1;
	v->a[24821] = anon_sym_DQUOTE;
	v->a[24822] = actions(724);
	v->a[24823] = 1;
	v->a[24824] = anon_sym_DOLLAR_LBRACE;
	v->a[24825] = actions(726);
	v->a[24826] = 1;
	v->a[24827] = anon_sym_DOLLAR_LPAREN;
	v->a[24828] = state(263);
	v->a[24829] = 2;
	v->a[24830] = sym_concatenation;
	v->a[24831] = aux_sym_for_statement_repeat1;
	v->a[24832] = actions(873);
	v->a[24833] = 3;
	v->a[24834] = sym_raw_string;
	v->a[24835] = sym_number;
	v->a[24836] = sym_word;
	v->a[24837] = state(647);
	v->a[24838] = 5;
	v->a[24839] = sym_arithmetic_expansion;
	small_parse_table_1242(v);
}

void	small_parse_table_1242(t_small_parse_table_array *v)
{
	v->a[24840] = sym_string;
	v->a[24841] = sym_simple_expansion;
	v->a[24842] = sym_expansion;
	v->a[24843] = sym_command_substitution;
	v->a[24844] = actions(546);
	v->a[24845] = 20;
	v->a[24846] = anon_sym_PIPE;
	v->a[24847] = anon_sym_SEMI_SEMI;
	v->a[24848] = anon_sym_AMP_AMP;
	v->a[24849] = anon_sym_PIPE_PIPE;
	v->a[24850] = anon_sym_LT;
	v->a[24851] = anon_sym_GT;
	v->a[24852] = anon_sym_GT_GT;
	v->a[24853] = anon_sym_AMP_GT;
	v->a[24854] = anon_sym_AMP_GT_GT;
	v->a[24855] = anon_sym_LT_AMP;
	v->a[24856] = anon_sym_GT_AMP;
	v->a[24857] = anon_sym_GT_PIPE;
	v->a[24858] = anon_sym_LT_AMP_DASH;
	v->a[24859] = anon_sym_GT_AMP_DASH;
	small_parse_table_1243(v);
}

void	small_parse_table_1243(t_small_parse_table_array *v)
{
	v->a[24860] = anon_sym_LT_LT;
	v->a[24861] = anon_sym_LT_LT_DASH;
	v->a[24862] = aux_sym_heredoc_redirect_token1;
	v->a[24863] = anon_sym_AMP;
	v->a[24864] = anon_sym_BQUOTE;
	v->a[24865] = anon_sym_SEMI;
	v->a[24866] = 11;
	v->a[24867] = actions(3);
	v->a[24868] = 1;
	v->a[24869] = sym_comment;
	v->a[24870] = actions(538);
	v->a[24871] = 1;
	v->a[24872] = sym_file_descriptor;
	v->a[24873] = actions(718);
	v->a[24874] = 1;
	v->a[24875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24876] = actions(720);
	v->a[24877] = 1;
	v->a[24878] = anon_sym_DOLLAR;
	v->a[24879] = actions(722);
	small_parse_table_1244(v);
}

void	small_parse_table_1244(t_small_parse_table_array *v)
{
	v->a[24880] = 1;
	v->a[24881] = anon_sym_DQUOTE;
	v->a[24882] = actions(724);
	v->a[24883] = 1;
	v->a[24884] = anon_sym_DOLLAR_LBRACE;
	v->a[24885] = actions(726);
	v->a[24886] = 1;
	v->a[24887] = anon_sym_DOLLAR_LPAREN;
	v->a[24888] = state(263);
	v->a[24889] = 2;
	v->a[24890] = sym_concatenation;
	v->a[24891] = aux_sym_for_statement_repeat1;
	v->a[24892] = actions(873);
	v->a[24893] = 3;
	v->a[24894] = sym_raw_string;
	v->a[24895] = sym_number;
	v->a[24896] = sym_word;
	v->a[24897] = state(647);
	v->a[24898] = 5;
	v->a[24899] = sym_arithmetic_expansion;
	small_parse_table_1245(v);
}

/* EOF small_parse_table_248.c */
