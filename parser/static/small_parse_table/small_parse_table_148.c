/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_148.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_740(t_small_parse_table_array *v)
{
	v->a[14800] = actions(2472);
	v->a[14801] = 1;
	v->a[14802] = anon_sym_DOLLAR_LPAREN;
	v->a[14803] = actions(2474);
	v->a[14804] = 1;
	v->a[14805] = anon_sym_BQUOTE;
	v->a[14806] = actions(2476);
	v->a[14807] = 1;
	v->a[14808] = anon_sym_DOLLAR_BQUOTE;
	v->a[14809] = actions(2478);
	v->a[14810] = 1;
	v->a[14811] = sym_file_descriptor;
	v->a[14812] = actions(2480);
	v->a[14813] = 1;
	v->a[14814] = sym_test_operator;
	v->a[14815] = actions(2482);
	v->a[14816] = 1;
	v->a[14817] = sym__brace_start;
	v->a[14818] = actions(2569);
	v->a[14819] = 1;
	small_parse_table_741(v);
}

void	small_parse_table_741(t_small_parse_table_array *v)
{
	v->a[14820] = aux_sym_heredoc_redirect_token1;
	v->a[14821] = state(2116);
	v->a[14822] = 1;
	v->a[14823] = aux_sym__heredoc_command;
	v->a[14824] = state(2852);
	v->a[14825] = 1;
	v->a[14826] = aux_sym__literal_repeat1;
	v->a[14827] = state(2882);
	v->a[14828] = 1;
	v->a[14829] = sym_concatenation;
	v->a[14830] = state(3887);
	v->a[14831] = 1;
	v->a[14832] = sym__heredoc_expression;
	v->a[14833] = state(3888);
	v->a[14834] = 1;
	v->a[14835] = sym__heredoc_pipeline;
	v->a[14836] = actions(2446);
	v->a[14837] = 2;
	v->a[14838] = sym_raw_string;
	v->a[14839] = sym_word;
	small_parse_table_742(v);
}

void	small_parse_table_742(t_small_parse_table_array *v)
{
	v->a[14840] = actions(2448);
	v->a[14841] = 2;
	v->a[14842] = anon_sym_PIPE;
	v->a[14843] = anon_sym_PIPE_AMP;
	v->a[14844] = actions(2450);
	v->a[14845] = 2;
	v->a[14846] = anon_sym_AMP_AMP;
	v->a[14847] = anon_sym_PIPE_PIPE;
	v->a[14848] = actions(2454);
	v->a[14849] = 2;
	v->a[14850] = anon_sym_LT_AMP_DASH;
	v->a[14851] = anon_sym_GT_AMP_DASH;
	v->a[14852] = state(2732);
	v->a[14853] = 2;
	v->a[14854] = sym_file_redirect;
	v->a[14855] = aux_sym_redirected_statement_repeat2;
	v->a[14856] = state(2716);
	v->a[14857] = 7;
	v->a[14858] = sym_arithmetic_expansion;
	v->a[14859] = sym_brace_expression;
	small_parse_table_743(v);
}

void	small_parse_table_743(t_small_parse_table_array *v)
{
	v->a[14860] = sym_string;
	v->a[14861] = sym_number;
	v->a[14862] = sym_simple_expansion;
	v->a[14863] = sym_expansion;
	v->a[14864] = sym_command_substitution;
	v->a[14865] = actions(2452);
	v->a[14866] = 8;
	v->a[14867] = anon_sym_LT;
	v->a[14868] = anon_sym_GT;
	v->a[14869] = anon_sym_GT_GT;
	v->a[14870] = anon_sym_AMP_GT;
	v->a[14871] = anon_sym_AMP_GT_GT;
	v->a[14872] = anon_sym_LT_AMP;
	v->a[14873] = anon_sym_GT_AMP;
	v->a[14874] = anon_sym_GT_PIPE;
	v->a[14875] = 18;
	v->a[14876] = actions(3);
	v->a[14877] = 1;
	v->a[14878] = sym_comment;
	v->a[14879] = actions(2354);
	small_parse_table_744(v);
}

void	small_parse_table_744(t_small_parse_table_array *v)
{
	v->a[14880] = 1;
	v->a[14881] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14882] = actions(2356);
	v->a[14883] = 1;
	v->a[14884] = anon_sym_DOLLAR;
	v->a[14885] = actions(2360);
	v->a[14886] = 1;
	v->a[14887] = anon_sym_DQUOTE;
	v->a[14888] = actions(2362);
	v->a[14889] = 1;
	v->a[14890] = aux_sym_number_token1;
	v->a[14891] = actions(2364);
	v->a[14892] = 1;
	v->a[14893] = aux_sym_number_token2;
	v->a[14894] = actions(2366);
	v->a[14895] = 1;
	v->a[14896] = anon_sym_DOLLAR_LBRACE;
	v->a[14897] = actions(2368);
	v->a[14898] = 1;
	v->a[14899] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_745(v);
}

/* EOF small_parse_table_148.c */
