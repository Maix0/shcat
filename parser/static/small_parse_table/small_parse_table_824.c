/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_824.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4120(t_small_parse_table_array *v)
{
	v->a[82400] = anon_sym_AMP_GT_GT;
	v->a[82401] = anon_sym_LT_AMP;
	v->a[82402] = anon_sym_GT_AMP;
	v->a[82403] = anon_sym_GT_PIPE;
	v->a[82404] = anon_sym_LT_AMP_DASH;
	v->a[82405] = anon_sym_GT_AMP_DASH;
	v->a[82406] = anon_sym_LT_LT;
	v->a[82407] = anon_sym_LT_LT_DASH;
	v->a[82408] = 21;
	v->a[82409] = actions(57);
	v->a[82410] = 1;
	v->a[82411] = sym_comment;
	v->a[82412] = actions(4584);
	v->a[82413] = 1;
	v->a[82414] = anon_sym_LPAREN;
	v->a[82415] = actions(4586);
	v->a[82416] = 1;
	v->a[82417] = anon_sym_BANG;
	v->a[82418] = actions(4592);
	v->a[82419] = 1;
	small_parse_table_4121(v);
}

void	small_parse_table_4121(t_small_parse_table_array *v)
{
	v->a[82420] = anon_sym_TILDE;
	v->a[82421] = actions(4594);
	v->a[82422] = 1;
	v->a[82423] = anon_sym_DOLLAR;
	v->a[82424] = actions(4596);
	v->a[82425] = 1;
	v->a[82426] = anon_sym_DQUOTE;
	v->a[82427] = actions(4598);
	v->a[82428] = 1;
	v->a[82429] = aux_sym_number_token1;
	v->a[82430] = actions(4600);
	v->a[82431] = 1;
	v->a[82432] = aux_sym_number_token2;
	v->a[82433] = actions(4602);
	v->a[82434] = 1;
	v->a[82435] = anon_sym_DOLLAR_LBRACE;
	v->a[82436] = actions(4604);
	v->a[82437] = 1;
	v->a[82438] = anon_sym_DOLLAR_LPAREN;
	v->a[82439] = actions(4606);
	small_parse_table_4122(v);
}

void	small_parse_table_4122(t_small_parse_table_array *v)
{
	v->a[82440] = 1;
	v->a[82441] = anon_sym_BQUOTE;
	v->a[82442] = actions(4608);
	v->a[82443] = 1;
	v->a[82444] = anon_sym_DOLLAR_BQUOTE;
	v->a[82445] = actions(4610);
	v->a[82446] = 1;
	v->a[82447] = aux_sym__simple_variable_name_token1;
	v->a[82448] = actions(4612);
	v->a[82449] = 1;
	v->a[82450] = sym_variable_name;
	v->a[82451] = state(1476);
	v->a[82452] = 1;
	v->a[82453] = sym__arithmetic_postfix_expression;
	v->a[82454] = state(1478);
	v->a[82455] = 1;
	v->a[82456] = sym__arithmetic_unary_expression;
	v->a[82457] = state(1490);
	v->a[82458] = 1;
	v->a[82459] = sym__arithmetic_ternary_expression;
	small_parse_table_4123(v);
}

void	small_parse_table_4123(t_small_parse_table_array *v)
{
	v->a[82460] = state(1511);
	v->a[82461] = 1;
	v->a[82462] = sym__arithmetic_binary_expression;
	v->a[82463] = actions(4588);
	v->a[82464] = 2;
	v->a[82465] = anon_sym_PLUS_PLUS;
	v->a[82466] = anon_sym_DASH_DASH;
	v->a[82467] = actions(4590);
	v->a[82468] = 2;
	v->a[82469] = anon_sym_DASH2;
	v->a[82470] = anon_sym_PLUS2;
	v->a[82471] = state(1440);
	v->a[82472] = 8;
	v->a[82473] = sym__arithmetic_expression;
	v->a[82474] = sym__arithmetic_literal;
	v->a[82475] = sym__arithmetic_parenthesized_expression;
	v->a[82476] = sym_string;
	v->a[82477] = sym_number;
	v->a[82478] = sym_simple_expansion;
	v->a[82479] = sym_expansion;
	small_parse_table_4124(v);
}

void	small_parse_table_4124(t_small_parse_table_array *v)
{
	v->a[82480] = sym_command_substitution;
	v->a[82481] = 21;
	v->a[82482] = actions(57);
	v->a[82483] = 1;
	v->a[82484] = sym_comment;
	v->a[82485] = actions(4614);
	v->a[82486] = 1;
	v->a[82487] = anon_sym_LPAREN;
	v->a[82488] = actions(4616);
	v->a[82489] = 1;
	v->a[82490] = anon_sym_BANG;
	v->a[82491] = actions(4622);
	v->a[82492] = 1;
	v->a[82493] = anon_sym_TILDE;
	v->a[82494] = actions(4624);
	v->a[82495] = 1;
	v->a[82496] = anon_sym_DOLLAR;
	v->a[82497] = actions(4626);
	v->a[82498] = 1;
	v->a[82499] = anon_sym_DQUOTE;
	small_parse_table_4125(v);
}

/* EOF small_parse_table_824.c */
