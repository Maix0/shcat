/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_268.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1340(t_small_parse_table_array *v)
{
	v->a[26800] = aux_sym_number_token2;
	v->a[26801] = anon_sym_DOLLAR_LBRACE;
	v->a[26802] = anon_sym_DOLLAR_LPAREN;
	v->a[26803] = anon_sym_BQUOTE;
	v->a[26804] = anon_sym_DOLLAR_BQUOTE;
	v->a[26805] = sym_word;
	v->a[26806] = anon_sym_SEMI;
	v->a[26807] = 6;
	v->a[26808] = actions(3);
	v->a[26809] = 1;
	v->a[26810] = sym_comment;
	v->a[26811] = actions(3288);
	v->a[26812] = 1;
	v->a[26813] = aux_sym_concatenation_token1;
	v->a[26814] = actions(3290);
	v->a[26815] = 1;
	v->a[26816] = sym__concat;
	v->a[26817] = state(713);
	v->a[26818] = 1;
	v->a[26819] = aux_sym_concatenation_repeat1;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = actions(2754);
	v->a[26821] = 6;
	v->a[26822] = sym_file_descriptor;
	v->a[26823] = sym_test_operator;
	v->a[26824] = sym__bare_dollar;
	v->a[26825] = sym__brace_start;
	v->a[26826] = ts_builtin_sym_end;
	v->a[26827] = aux_sym_heredoc_redirect_token1;
	v->a[26828] = actions(2749);
	v->a[26829] = 32;
	v->a[26830] = anon_sym_LPAREN;
	v->a[26831] = anon_sym_PIPE;
	v->a[26832] = anon_sym_SEMI_SEMI;
	v->a[26833] = anon_sym_PIPE_AMP;
	v->a[26834] = anon_sym_AMP_AMP;
	v->a[26835] = anon_sym_PIPE_PIPE;
	v->a[26836] = anon_sym_LT;
	v->a[26837] = anon_sym_GT;
	v->a[26838] = anon_sym_GT_GT;
	v->a[26839] = anon_sym_AMP_GT;
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = anon_sym_AMP_GT_GT;
	v->a[26841] = anon_sym_LT_AMP;
	v->a[26842] = anon_sym_GT_AMP;
	v->a[26843] = anon_sym_GT_PIPE;
	v->a[26844] = anon_sym_LT_AMP_DASH;
	v->a[26845] = anon_sym_GT_AMP_DASH;
	v->a[26846] = anon_sym_LT_LT;
	v->a[26847] = anon_sym_LT_LT_DASH;
	v->a[26848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26849] = anon_sym_AMP;
	v->a[26850] = anon_sym_DOLLAR;
	v->a[26851] = sym__special_character;
	v->a[26852] = anon_sym_DQUOTE;
	v->a[26853] = sym_raw_string;
	v->a[26854] = aux_sym_number_token1;
	v->a[26855] = aux_sym_number_token2;
	v->a[26856] = anon_sym_DOLLAR_LBRACE;
	v->a[26857] = anon_sym_DOLLAR_LPAREN;
	v->a[26858] = anon_sym_BQUOTE;
	v->a[26859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = sym_word;
	v->a[26861] = anon_sym_SEMI;
	v->a[26862] = 6;
	v->a[26863] = actions(3);
	v->a[26864] = 1;
	v->a[26865] = sym_comment;
	v->a[26866] = actions(3246);
	v->a[26867] = 1;
	v->a[26868] = aux_sym_concatenation_token1;
	v->a[26869] = actions(3248);
	v->a[26870] = 1;
	v->a[26871] = sym__concat;
	v->a[26872] = state(650);
	v->a[26873] = 1;
	v->a[26874] = aux_sym_concatenation_repeat1;
	v->a[26875] = actions(1390);
	v->a[26876] = 5;
	v->a[26877] = sym_file_descriptor;
	v->a[26878] = sym_variable_name;
	v->a[26879] = sym_test_operator;
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = sym__brace_start;
	v->a[26881] = aux_sym_heredoc_redirect_token1;
	v->a[26882] = actions(1388);
	v->a[26883] = 33;
	v->a[26884] = anon_sym_PIPE;
	v->a[26885] = anon_sym_SEMI_SEMI;
	v->a[26886] = anon_sym_SEMI_AMP;
	v->a[26887] = anon_sym_SEMI_SEMI_AMP;
	v->a[26888] = anon_sym_PIPE_AMP;
	v->a[26889] = anon_sym_AMP_AMP;
	v->a[26890] = anon_sym_PIPE_PIPE;
	v->a[26891] = anon_sym_LT;
	v->a[26892] = anon_sym_GT;
	v->a[26893] = anon_sym_GT_GT;
	v->a[26894] = anon_sym_AMP_GT;
	v->a[26895] = anon_sym_AMP_GT_GT;
	v->a[26896] = anon_sym_LT_AMP;
	v->a[26897] = anon_sym_GT_AMP;
	v->a[26898] = anon_sym_GT_PIPE;
	v->a[26899] = anon_sym_LT_AMP_DASH;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
