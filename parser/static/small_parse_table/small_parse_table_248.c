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
	v->a[24800] = 1;
	v->a[24801] = anon_sym_DQUOTE;
	v->a[24802] = actions(833);
	v->a[24803] = 1;
	v->a[24804] = anon_sym_DOLLAR_LBRACE;
	v->a[24805] = actions(836);
	v->a[24806] = 1;
	v->a[24807] = anon_sym_DOLLAR_LPAREN;
	v->a[24808] = actions(839);
	v->a[24809] = 1;
	v->a[24810] = anon_sym_BQUOTE;
	v->a[24811] = state(301);
	v->a[24812] = 2;
	v->a[24813] = sym_concatenation;
	v->a[24814] = aux_sym_for_statement_repeat1;
	v->a[24815] = actions(960);
	v->a[24816] = 3;
	v->a[24817] = sym_raw_string;
	v->a[24818] = sym_number;
	v->a[24819] = sym_word;
	small_parse_table_1241(v);
}

void	small_parse_table_1241(t_small_parse_table_array *v)
{
	v->a[24820] = state(512);
	v->a[24821] = 5;
	v->a[24822] = sym_arithmetic_expansion;
	v->a[24823] = sym_string;
	v->a[24824] = sym_simple_expansion;
	v->a[24825] = sym_expansion;
	v->a[24826] = sym_command_substitution;
	v->a[24827] = actions(618);
	v->a[24828] = 15;
	v->a[24829] = anon_sym_PIPE;
	v->a[24830] = anon_sym_SEMI_SEMI;
	v->a[24831] = anon_sym_AMP_AMP;
	v->a[24832] = anon_sym_PIPE_PIPE;
	v->a[24833] = anon_sym_LT;
	v->a[24834] = anon_sym_GT;
	v->a[24835] = anon_sym_GT_GT;
	v->a[24836] = anon_sym_LT_AMP;
	v->a[24837] = anon_sym_GT_AMP;
	v->a[24838] = anon_sym_GT_PIPE;
	v->a[24839] = anon_sym_LT_GT;
	small_parse_table_1242(v);
}

void	small_parse_table_1242(t_small_parse_table_array *v)
{
	v->a[24840] = anon_sym_LT_LT;
	v->a[24841] = anon_sym_LT_LT_DASH;
	v->a[24842] = aux_sym_heredoc_redirect_token1;
	v->a[24843] = anon_sym_SEMI;
	v->a[24844] = 10;
	v->a[24845] = actions(3);
	v->a[24846] = 1;
	v->a[24847] = sym_comment;
	v->a[24848] = actions(746);
	v->a[24849] = 1;
	v->a[24850] = anon_sym_PIPE;
	v->a[24851] = actions(900);
	v->a[24852] = 1;
	v->a[24853] = sym_variable_name;
	v->a[24854] = state(618);
	v->a[24855] = 1;
	v->a[24856] = sym_terminator;
	v->a[24857] = actions(850);
	v->a[24858] = 2;
	v->a[24859] = anon_sym_LT_LT;
	small_parse_table_1243(v);
}

void	small_parse_table_1243(t_small_parse_table_array *v)
{
	v->a[24860] = anon_sym_LT_LT_DASH;
	v->a[24861] = actions(898);
	v->a[24862] = 2;
	v->a[24863] = anon_sym_AMP_AMP;
	v->a[24864] = anon_sym_PIPE_PIPE;
	v->a[24865] = state(1002);
	v->a[24866] = 2;
	v->a[24867] = sym_variable_assignment;
	v->a[24868] = aux_sym__variable_assignments_repeat1;
	v->a[24869] = actions(963);
	v->a[24870] = 3;
	v->a[24871] = anon_sym_SEMI_SEMI;
	v->a[24872] = aux_sym_heredoc_redirect_token1;
	v->a[24873] = anon_sym_SEMI;
	v->a[24874] = state(984);
	v->a[24875] = 3;
	v->a[24876] = sym_file_redirect;
	v->a[24877] = sym_heredoc_redirect;
	v->a[24878] = aux_sym_redirected_statement_repeat1;
	v->a[24879] = actions(742);
	small_parse_table_1244(v);
}

void	small_parse_table_1244(t_small_parse_table_array *v)
{
	v->a[24880] = 16;
	v->a[24881] = anon_sym_LT;
	v->a[24882] = anon_sym_GT;
	v->a[24883] = anon_sym_GT_GT;
	v->a[24884] = anon_sym_LT_AMP;
	v->a[24885] = anon_sym_GT_AMP;
	v->a[24886] = anon_sym_GT_PIPE;
	v->a[24887] = anon_sym_LT_GT;
	v->a[24888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24889] = anon_sym_DOLLAR;
	v->a[24890] = anon_sym_DQUOTE;
	v->a[24891] = sym_raw_string;
	v->a[24892] = sym_number;
	v->a[24893] = anon_sym_DOLLAR_LBRACE;
	v->a[24894] = anon_sym_DOLLAR_LPAREN;
	v->a[24895] = anon_sym_BQUOTE;
	v->a[24896] = sym_word;
	v->a[24897] = 11;
	v->a[24898] = actions(3);
	v->a[24899] = 1;
	small_parse_table_1245(v);
}

/* EOF small_parse_table_248.c */
