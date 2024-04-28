/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2848.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14240(t_small_parse_table_array *v)
{
	v->a[284800] = anon_sym_AMP_GT_GT;
	v->a[284801] = anon_sym_GT_PIPE;
	v->a[284802] = state(5382);
	v->a[284803] = 3;
	v->a[284804] = sym_file_redirect;
	v->a[284805] = sym_heredoc_redirect;
	v->a[284806] = aux_sym_redirected_statement_repeat1;
	v->a[284807] = actions(11431);
	v->a[284808] = 4;
	v->a[284809] = anon_sym_PIPE_PIPE;
	v->a[284810] = anon_sym_AMP_AMP;
	v->a[284811] = anon_sym_PIPE_AMP;
	v->a[284812] = anon_sym_RBRACK;
	v->a[284813] = actions(12794);
	v->a[284814] = 5;
	v->a[284815] = anon_sym_LT;
	v->a[284816] = anon_sym_GT;
	v->a[284817] = anon_sym_AMP_GT;
	v->a[284818] = anon_sym_LT_AMP;
	v->a[284819] = anon_sym_GT_AMP;
	small_parse_table_14241(v);
}

void	small_parse_table_14241(t_small_parse_table_array *v)
{
	v->a[284820] = 9;
	v->a[284821] = actions(3);
	v->a[284822] = 1;
	v->a[284823] = sym_comment;
	v->a[284824] = actions(5944);
	v->a[284825] = 1;
	v->a[284826] = aux_sym_heredoc_redirect_token1;
	v->a[284827] = actions(12778);
	v->a[284828] = 1;
	v->a[284829] = sym_file_descriptor;
	v->a[284830] = actions(4253);
	v->a[284831] = 2;
	v->a[284832] = anon_sym_PIPE;
	v->a[284833] = anon_sym_PIPE_AMP;
	v->a[284834] = actions(4692);
	v->a[284835] = 2;
	v->a[284836] = anon_sym_LT_LT;
	v->a[284837] = anon_sym_LT_LT_DASH;
	v->a[284838] = actions(5940);
	v->a[284839] = 2;
	small_parse_table_14242(v);
}

void	small_parse_table_14242(t_small_parse_table_array *v)
{
	v->a[284840] = anon_sym_PIPE_PIPE;
	v->a[284841] = anon_sym_AMP_AMP;
	v->a[284842] = actions(12346);
	v->a[284843] = 2;
	v->a[284844] = anon_sym_LT_AMP_DASH;
	v->a[284845] = anon_sym_GT_AMP_DASH;
	v->a[284846] = state(5366);
	v->a[284847] = 3;
	v->a[284848] = sym_file_redirect;
	v->a[284849] = sym_heredoc_redirect;
	v->a[284850] = aux_sym_redirected_statement_repeat1;
	v->a[284851] = actions(12344);
	v->a[284852] = 8;
	v->a[284853] = anon_sym_LT;
	v->a[284854] = anon_sym_GT;
	v->a[284855] = anon_sym_GT_GT;
	v->a[284856] = anon_sym_AMP_GT;
	v->a[284857] = anon_sym_AMP_GT_GT;
	v->a[284858] = anon_sym_LT_AMP;
	v->a[284859] = anon_sym_GT_AMP;
	small_parse_table_14243(v);
}

void	small_parse_table_14243(t_small_parse_table_array *v)
{
	v->a[284860] = anon_sym_GT_PIPE;
	v->a[284861] = 3;
	v->a[284862] = actions(71);
	v->a[284863] = 1;
	v->a[284864] = sym_comment;
	v->a[284865] = actions(12670);
	v->a[284866] = 6;
	v->a[284867] = anon_sym_LPAREN;
	v->a[284868] = anon_sym_DOLLAR;
	v->a[284869] = aux_sym_number_token1;
	v->a[284870] = aux_sym_number_token2;
	v->a[284871] = anon_sym_DOLLAR_LPAREN;
	v->a[284872] = sym_word;
	v->a[284873] = actions(12672);
	v->a[284874] = 15;
	v->a[284875] = sym_test_operator;
	v->a[284876] = sym_extglob_pattern;
	v->a[284877] = sym__brace_start;
	v->a[284878] = anon_sym_LPAREN_LPAREN;
	v->a[284879] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14244(v);
}

void	small_parse_table_14244(t_small_parse_table_array *v)
{
	v->a[284880] = anon_sym_DOLLAR_LBRACK;
	v->a[284881] = sym__special_character;
	v->a[284882] = anon_sym_DQUOTE;
	v->a[284883] = sym_raw_string;
	v->a[284884] = sym_ansi_c_string;
	v->a[284885] = anon_sym_DOLLAR_LBRACE;
	v->a[284886] = anon_sym_BQUOTE;
	v->a[284887] = anon_sym_DOLLAR_BQUOTE;
	v->a[284888] = anon_sym_LT_LPAREN;
	v->a[284889] = anon_sym_GT_LPAREN;
	v->a[284890] = 6;
	v->a[284891] = actions(71);
	v->a[284892] = 1;
	v->a[284893] = sym_comment;
	v->a[284894] = actions(12812);
	v->a[284895] = 1;
	v->a[284896] = sym_variable_name;
	v->a[284897] = state(6737);
	v->a[284898] = 1;
	v->a[284899] = sym_subscript;
	small_parse_table_14245(v);
}

/* EOF small_parse_table_2848.c */
