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
	v->a[24800] = anon_sym_PIPE;
	v->a[24801] = anon_sym_SEMI_SEMI;
	v->a[24802] = anon_sym_SEMI_AMP;
	v->a[24803] = anon_sym_SEMI_SEMI_AMP;
	v->a[24804] = anon_sym_PIPE_AMP;
	v->a[24805] = anon_sym_AMP_AMP;
	v->a[24806] = anon_sym_PIPE_PIPE;
	v->a[24807] = anon_sym_LT;
	v->a[24808] = anon_sym_GT;
	v->a[24809] = anon_sym_GT_GT;
	v->a[24810] = anon_sym_AMP_GT;
	v->a[24811] = anon_sym_AMP_GT_GT;
	v->a[24812] = anon_sym_LT_AMP;
	v->a[24813] = anon_sym_GT_AMP;
	v->a[24814] = anon_sym_GT_PIPE;
	v->a[24815] = anon_sym_LT_AMP_DASH;
	v->a[24816] = anon_sym_GT_AMP_DASH;
	v->a[24817] = anon_sym_LT_LT;
	v->a[24818] = anon_sym_LT_LT_DASH;
	v->a[24819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1241(v);
}

void	small_parse_table_1241(t_small_parse_table_array *v)
{
	v->a[24820] = anon_sym_AMP;
	v->a[24821] = anon_sym_DOLLAR;
	v->a[24822] = sym__special_character;
	v->a[24823] = anon_sym_DQUOTE;
	v->a[24824] = sym_raw_string;
	v->a[24825] = aux_sym_number_token1;
	v->a[24826] = aux_sym_number_token2;
	v->a[24827] = anon_sym_DOLLAR_LBRACE;
	v->a[24828] = anon_sym_DOLLAR_LPAREN;
	v->a[24829] = anon_sym_BQUOTE;
	v->a[24830] = anon_sym_DOLLAR_BQUOTE;
	v->a[24831] = sym_word;
	v->a[24832] = anon_sym_SEMI;
	v->a[24833] = 3;
	v->a[24834] = actions(3);
	v->a[24835] = 1;
	v->a[24836] = sym_comment;
	v->a[24837] = actions(3125);
	v->a[24838] = 6;
	v->a[24839] = sym_file_descriptor;
	small_parse_table_1242(v);
}

void	small_parse_table_1242(t_small_parse_table_array *v)
{
	v->a[24840] = sym__concat;
	v->a[24841] = sym_variable_name;
	v->a[24842] = sym_test_operator;
	v->a[24843] = sym__brace_start;
	v->a[24844] = aux_sym_heredoc_redirect_token1;
	v->a[24845] = actions(3123);
	v->a[24846] = 36;
	v->a[24847] = anon_sym_esac;
	v->a[24848] = anon_sym_PIPE;
	v->a[24849] = anon_sym_SEMI_SEMI;
	v->a[24850] = anon_sym_SEMI_AMP;
	v->a[24851] = anon_sym_SEMI_SEMI_AMP;
	v->a[24852] = anon_sym_PIPE_AMP;
	v->a[24853] = anon_sym_AMP_AMP;
	v->a[24854] = anon_sym_PIPE_PIPE;
	v->a[24855] = anon_sym_LT;
	v->a[24856] = anon_sym_GT;
	v->a[24857] = anon_sym_GT_GT;
	v->a[24858] = anon_sym_AMP_GT;
	v->a[24859] = anon_sym_AMP_GT_GT;
	small_parse_table_1243(v);
}

void	small_parse_table_1243(t_small_parse_table_array *v)
{
	v->a[24860] = anon_sym_LT_AMP;
	v->a[24861] = anon_sym_GT_AMP;
	v->a[24862] = anon_sym_GT_PIPE;
	v->a[24863] = anon_sym_LT_AMP_DASH;
	v->a[24864] = anon_sym_GT_AMP_DASH;
	v->a[24865] = anon_sym_LT_LT;
	v->a[24866] = anon_sym_LT_LT_DASH;
	v->a[24867] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24868] = anon_sym_AMP;
	v->a[24869] = aux_sym_concatenation_token1;
	v->a[24870] = anon_sym_DOLLAR;
	v->a[24871] = sym__special_character;
	v->a[24872] = anon_sym_DQUOTE;
	v->a[24873] = sym_raw_string;
	v->a[24874] = aux_sym_number_token1;
	v->a[24875] = aux_sym_number_token2;
	v->a[24876] = anon_sym_DOLLAR_LBRACE;
	v->a[24877] = anon_sym_DOLLAR_LPAREN;
	v->a[24878] = anon_sym_BQUOTE;
	v->a[24879] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1244(v);
}

void	small_parse_table_1244(t_small_parse_table_array *v)
{
	v->a[24880] = aux_sym__simple_variable_name_token1;
	v->a[24881] = sym_word;
	v->a[24882] = anon_sym_SEMI;
	v->a[24883] = 29;
	v->a[24884] = actions(17);
	v->a[24885] = 1;
	v->a[24886] = anon_sym_LPAREN;
	v->a[24887] = actions(57);
	v->a[24888] = 1;
	v->a[24889] = sym_comment;
	v->a[24890] = actions(87);
	v->a[24891] = 1;
	v->a[24892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24893] = actions(89);
	v->a[24894] = 1;
	v->a[24895] = anon_sym_DOLLAR;
	v->a[24896] = actions(93);
	v->a[24897] = 1;
	v->a[24898] = anon_sym_DQUOTE;
	v->a[24899] = actions(97);
	small_parse_table_1245(v);
}

/* EOF small_parse_table_248.c */
