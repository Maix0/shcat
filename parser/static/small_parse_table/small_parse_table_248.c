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
	v->a[24800] = sym_expansion;
	v->a[24801] = sym_command_substitution;
	v->a[24802] = sym_process_substitution;
	v->a[24803] = actions(2494);
	v->a[24804] = 20;
	v->a[24805] = anon_sym_SEMI;
	v->a[24806] = anon_sym_PIPE_PIPE;
	v->a[24807] = anon_sym_AMP_AMP;
	v->a[24808] = anon_sym_PIPE;
	v->a[24809] = anon_sym_AMP;
	v->a[24810] = anon_sym_LT;
	v->a[24811] = anon_sym_GT;
	v->a[24812] = anon_sym_LT_LT;
	v->a[24813] = anon_sym_GT_GT;
	v->a[24814] = anon_sym_SEMI_SEMI;
	v->a[24815] = anon_sym_PIPE_AMP;
	v->a[24816] = anon_sym_AMP_GT;
	v->a[24817] = anon_sym_AMP_GT_GT;
	v->a[24818] = anon_sym_LT_AMP;
	v->a[24819] = anon_sym_GT_AMP;
	small_parse_table_1241(v);
}

void	small_parse_table_1241(t_small_parse_table_array *v)
{
	v->a[24820] = anon_sym_GT_PIPE;
	v->a[24821] = anon_sym_LT_AMP_DASH;
	v->a[24822] = anon_sym_GT_AMP_DASH;
	v->a[24823] = anon_sym_LT_LT_DASH;
	v->a[24824] = anon_sym_LT_LT_LT;
	v->a[24825] = 20;
	v->a[24826] = actions(3);
	v->a[24827] = 1;
	v->a[24828] = sym_comment;
	v->a[24829] = actions(3580);
	v->a[24830] = 1;
	v->a[24831] = anon_sym_DQUOTE;
	v->a[24832] = actions(3610);
	v->a[24833] = 1;
	v->a[24834] = anon_sym_DOLLAR_LBRACK;
	v->a[24835] = actions(3612);
	v->a[24836] = 1;
	v->a[24837] = anon_sym_DOLLAR;
	v->a[24838] = actions(3616);
	v->a[24839] = 1;
	small_parse_table_1242(v);
}

void	small_parse_table_1242(t_small_parse_table_array *v)
{
	v->a[24840] = aux_sym_number_token1;
	v->a[24841] = actions(3618);
	v->a[24842] = 1;
	v->a[24843] = aux_sym_number_token2;
	v->a[24844] = actions(3620);
	v->a[24845] = 1;
	v->a[24846] = anon_sym_DOLLAR_LBRACE;
	v->a[24847] = actions(3622);
	v->a[24848] = 1;
	v->a[24849] = anon_sym_DOLLAR_LPAREN;
	v->a[24850] = actions(3626);
	v->a[24851] = 1;
	v->a[24852] = anon_sym_DOLLAR_BQUOTE;
	v->a[24853] = actions(3632);
	v->a[24854] = 1;
	v->a[24855] = sym__brace_start;
	v->a[24856] = actions(4133);
	v->a[24857] = 1;
	v->a[24858] = sym__special_character;
	v->a[24859] = actions(4135);
	small_parse_table_1243(v);
}

void	small_parse_table_1243(t_small_parse_table_array *v)
{
	v->a[24860] = 1;
	v->a[24861] = sym_test_operator;
	v->a[24862] = state(2270);
	v->a[24863] = 1;
	v->a[24864] = aux_sym__literal_repeat1;
	v->a[24865] = actions(2096);
	v->a[24866] = 2;
	v->a[24867] = sym_file_descriptor;
	v->a[24868] = aux_sym_heredoc_redirect_token1;
	v->a[24869] = actions(3608);
	v->a[24870] = 2;
	v->a[24871] = anon_sym_LPAREN_LPAREN;
	v->a[24872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24873] = actions(3628);
	v->a[24874] = 2;
	v->a[24875] = anon_sym_LT_LPAREN;
	v->a[24876] = anon_sym_GT_LPAREN;
	v->a[24877] = state(781);
	v->a[24878] = 2;
	v->a[24879] = sym_concatenation;
	small_parse_table_1244(v);
}

void	small_parse_table_1244(t_small_parse_table_array *v)
{
	v->a[24880] = aux_sym_for_statement_repeat1;
	v->a[24881] = actions(4131);
	v->a[24882] = 3;
	v->a[24883] = sym_raw_string;
	v->a[24884] = sym_ansi_c_string;
	v->a[24885] = sym_word;
	v->a[24886] = state(1968);
	v->a[24887] = 9;
	v->a[24888] = sym_arithmetic_expansion;
	v->a[24889] = sym_brace_expression;
	v->a[24890] = sym_string;
	v->a[24891] = sym_translated_string;
	v->a[24892] = sym_number;
	v->a[24893] = sym_simple_expansion;
	v->a[24894] = sym_expansion;
	v->a[24895] = sym_command_substitution;
	v->a[24896] = sym_process_substitution;
	v->a[24897] = actions(2094);
	v->a[24898] = 20;
	v->a[24899] = anon_sym_SEMI;
	small_parse_table_1245(v);
}

/* EOF small_parse_table_248.c */
