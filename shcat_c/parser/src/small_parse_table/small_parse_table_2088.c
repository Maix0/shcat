/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2088.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10440(t_small_parse_table_array *v)
{
	v->a[208800] = actions(9378);
	v->a[208801] = 1;
	v->a[208802] = aux_sym_number_token1;
	v->a[208803] = actions(9380);
	v->a[208804] = 1;
	v->a[208805] = aux_sym_number_token2;
	v->a[208806] = actions(9382);
	v->a[208807] = 1;
	v->a[208808] = anon_sym_DOLLAR_LBRACE;
	v->a[208809] = actions(9384);
	v->a[208810] = 1;
	v->a[208811] = anon_sym_DOLLAR_LPAREN;
	v->a[208812] = actions(9386);
	v->a[208813] = 1;
	v->a[208814] = anon_sym_BQUOTE;
	v->a[208815] = actions(9388);
	v->a[208816] = 1;
	v->a[208817] = anon_sym_DOLLAR_BQUOTE;
	v->a[208818] = actions(9392);
	v->a[208819] = 1;
	small_parse_table_10441(v);
}

void	small_parse_table_10441(t_small_parse_table_array *v)
{
	v->a[208820] = sym_variable_name;
	v->a[208821] = actions(9836);
	v->a[208822] = 1;
	v->a[208823] = aux_sym__simple_variable_name_token1;
	v->a[208824] = state(3391);
	v->a[208825] = 1;
	v->a[208826] = sym__arithmetic_binary_expression;
	v->a[208827] = state(3396);
	v->a[208828] = 1;
	v->a[208829] = sym__arithmetic_ternary_expression;
	v->a[208830] = state(3398);
	v->a[208831] = 1;
	v->a[208832] = sym__arithmetic_unary_expression;
	v->a[208833] = state(3400);
	v->a[208834] = 1;
	v->a[208835] = sym__arithmetic_postfix_expression;
	v->a[208836] = actions(9368);
	v->a[208837] = 2;
	v->a[208838] = anon_sym_PLUS_PLUS2;
	v->a[208839] = anon_sym_DASH_DASH2;
	small_parse_table_10442(v);
}

void	small_parse_table_10442(t_small_parse_table_array *v)
{
	v->a[208840] = actions(9370);
	v->a[208841] = 2;
	v->a[208842] = anon_sym_DASH2;
	v->a[208843] = anon_sym_PLUS2;
	v->a[208844] = state(3339);
	v->a[208845] = 9;
	v->a[208846] = sym_subscript;
	v->a[208847] = sym__arithmetic_expression;
	v->a[208848] = sym__arithmetic_literal;
	v->a[208849] = sym__arithmetic_parenthesized_expression;
	v->a[208850] = sym_string;
	v->a[208851] = sym_number;
	v->a[208852] = sym_simple_expansion;
	v->a[208853] = sym_expansion;
	v->a[208854] = sym_command_substitution;
	v->a[208855] = 21;
	v->a[208856] = actions(71);
	v->a[208857] = 1;
	v->a[208858] = sym_comment;
	v->a[208859] = actions(3064);
	small_parse_table_10443(v);
}

void	small_parse_table_10443(t_small_parse_table_array *v)
{
	v->a[208860] = 1;
	v->a[208861] = sym_variable_name;
	v->a[208862] = actions(9278);
	v->a[208863] = 1;
	v->a[208864] = anon_sym_LPAREN;
	v->a[208865] = actions(9280);
	v->a[208866] = 1;
	v->a[208867] = anon_sym_BANG;
	v->a[208868] = actions(9286);
	v->a[208869] = 1;
	v->a[208870] = anon_sym_TILDE;
	v->a[208871] = actions(9288);
	v->a[208872] = 1;
	v->a[208873] = anon_sym_DOLLAR;
	v->a[208874] = actions(9290);
	v->a[208875] = 1;
	v->a[208876] = anon_sym_DQUOTE;
	v->a[208877] = actions(9292);
	v->a[208878] = 1;
	v->a[208879] = aux_sym_number_token1;
	small_parse_table_10444(v);
}

void	small_parse_table_10444(t_small_parse_table_array *v)
{
	v->a[208880] = actions(9294);
	v->a[208881] = 1;
	v->a[208882] = aux_sym_number_token2;
	v->a[208883] = actions(9296);
	v->a[208884] = 1;
	v->a[208885] = anon_sym_DOLLAR_LBRACE;
	v->a[208886] = actions(9298);
	v->a[208887] = 1;
	v->a[208888] = anon_sym_DOLLAR_LPAREN;
	v->a[208889] = actions(9300);
	v->a[208890] = 1;
	v->a[208891] = anon_sym_BQUOTE;
	v->a[208892] = actions(9302);
	v->a[208893] = 1;
	v->a[208894] = anon_sym_DOLLAR_BQUOTE;
	v->a[208895] = actions(9838);
	v->a[208896] = 1;
	v->a[208897] = aux_sym__simple_variable_name_token1;
	v->a[208898] = state(2801);
	v->a[208899] = 1;
	small_parse_table_10445(v);
}

/* EOF small_parse_table_2088.c */
