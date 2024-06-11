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
	v->a[24801] = anon_sym_DOLLAR_LPAREN;
	v->a[24802] = actions(894);
	v->a[24803] = 1;
	v->a[24804] = anon_sym_BQUOTE;
	v->a[24805] = actions(896);
	v->a[24806] = 1;
	v->a[24807] = sym_file_descriptor;
	v->a[24808] = state(1678);
	v->a[24809] = 1;
	v->a[24810] = aux_sym__heredoc_command;
	v->a[24811] = state(2098);
	v->a[24812] = 1;
	v->a[24813] = sym_concatenation;
	v->a[24814] = state(2332);
	v->a[24815] = 1;
	v->a[24816] = sym__heredoc_expression;
	v->a[24817] = state(2338);
	v->a[24818] = 1;
	v->a[24819] = sym__heredoc_pipeline;
	small_parse_table_1241(v);
}

void	small_parse_table_1241(t_small_parse_table_array *v)
{
	v->a[24820] = actions(874);
	v->a[24821] = 2;
	v->a[24822] = anon_sym_PIPE;
	v->a[24823] = anon_sym_PIPE_AMP;
	v->a[24824] = actions(876);
	v->a[24825] = 2;
	v->a[24826] = anon_sym_AMP_AMP;
	v->a[24827] = anon_sym_PIPE_PIPE;
	v->a[24828] = actions(880);
	v->a[24829] = 2;
	v->a[24830] = anon_sym_LT_AMP_DASH;
	v->a[24831] = anon_sym_GT_AMP_DASH;
	v->a[24832] = state(1683);
	v->a[24833] = 2;
	v->a[24834] = sym_file_redirect;
	v->a[24835] = aux_sym_redirected_statement_repeat2;
	v->a[24836] = actions(872);
	v->a[24837] = 3;
	v->a[24838] = sym_raw_string;
	v->a[24839] = sym_number;
	small_parse_table_1242(v);
}

void	small_parse_table_1242(t_small_parse_table_array *v)
{
	v->a[24840] = sym_word;
	v->a[24841] = state(1944);
	v->a[24842] = 5;
	v->a[24843] = sym_arithmetic_expansion;
	v->a[24844] = sym_string;
	v->a[24845] = sym_simple_expansion;
	v->a[24846] = sym_expansion;
	v->a[24847] = sym_command_substitution;
	v->a[24848] = actions(878);
	v->a[24849] = 8;
	v->a[24850] = anon_sym_LT;
	v->a[24851] = anon_sym_GT;
	v->a[24852] = anon_sym_GT_GT;
	v->a[24853] = anon_sym_AMP_GT;
	v->a[24854] = anon_sym_AMP_GT_GT;
	v->a[24855] = anon_sym_LT_AMP;
	v->a[24856] = anon_sym_GT_AMP;
	v->a[24857] = anon_sym_GT_PIPE;
	v->a[24858] = 20;
	v->a[24859] = actions(3);
	small_parse_table_1243(v);
}

void	small_parse_table_1243(t_small_parse_table_array *v)
{
	v->a[24860] = 1;
	v->a[24861] = sym_comment;
	v->a[24862] = actions(884);
	v->a[24863] = 1;
	v->a[24864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24865] = actions(886);
	v->a[24866] = 1;
	v->a[24867] = anon_sym_DOLLAR;
	v->a[24868] = actions(888);
	v->a[24869] = 1;
	v->a[24870] = anon_sym_DQUOTE;
	v->a[24871] = actions(890);
	v->a[24872] = 1;
	v->a[24873] = anon_sym_DOLLAR_LBRACE;
	v->a[24874] = actions(892);
	v->a[24875] = 1;
	v->a[24876] = anon_sym_DOLLAR_LPAREN;
	v->a[24877] = actions(894);
	v->a[24878] = 1;
	v->a[24879] = anon_sym_BQUOTE;
	small_parse_table_1244(v);
}

void	small_parse_table_1244(t_small_parse_table_array *v)
{
	v->a[24880] = actions(896);
	v->a[24881] = 1;
	v->a[24882] = sym_file_descriptor;
	v->a[24883] = actions(898);
	v->a[24884] = 1;
	v->a[24885] = aux_sym_heredoc_redirect_token1;
	v->a[24886] = state(1685);
	v->a[24887] = 1;
	v->a[24888] = aux_sym__heredoc_command;
	v->a[24889] = state(2098);
	v->a[24890] = 1;
	v->a[24891] = sym_concatenation;
	v->a[24892] = state(2327);
	v->a[24893] = 1;
	v->a[24894] = sym__heredoc_expression;
	v->a[24895] = state(2328);
	v->a[24896] = 1;
	v->a[24897] = sym__heredoc_pipeline;
	v->a[24898] = actions(874);
	v->a[24899] = 2;
	small_parse_table_1245(v);
}

/* EOF small_parse_table_248.c */
