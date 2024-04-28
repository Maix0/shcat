/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2063.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10315(t_small_parse_table_array *v)
{
	v->a[206300] = sym_arithmetic_expansion;
	v->a[206301] = sym_brace_expression;
	v->a[206302] = sym_string;
	v->a[206303] = sym_translated_string;
	v->a[206304] = sym_number;
	v->a[206305] = sym_simple_expansion;
	v->a[206306] = sym_expansion;
	v->a[206307] = sym_command_substitution;
	v->a[206308] = sym_process_substitution;
	v->a[206309] = 21;
	v->a[206310] = actions(71);
	v->a[206311] = 1;
	v->a[206312] = sym_comment;
	v->a[206313] = actions(9364);
	v->a[206314] = 1;
	v->a[206315] = anon_sym_LPAREN;
	v->a[206316] = actions(9366);
	v->a[206317] = 1;
	v->a[206318] = anon_sym_BANG;
	v->a[206319] = actions(9372);
	small_parse_table_10316(v);
}

void	small_parse_table_10316(t_small_parse_table_array *v)
{
	v->a[206320] = 1;
	v->a[206321] = anon_sym_TILDE;
	v->a[206322] = actions(9374);
	v->a[206323] = 1;
	v->a[206324] = anon_sym_DOLLAR;
	v->a[206325] = actions(9376);
	v->a[206326] = 1;
	v->a[206327] = anon_sym_DQUOTE;
	v->a[206328] = actions(9378);
	v->a[206329] = 1;
	v->a[206330] = aux_sym_number_token1;
	v->a[206331] = actions(9380);
	v->a[206332] = 1;
	v->a[206333] = aux_sym_number_token2;
	v->a[206334] = actions(9382);
	v->a[206335] = 1;
	v->a[206336] = anon_sym_DOLLAR_LBRACE;
	v->a[206337] = actions(9384);
	v->a[206338] = 1;
	v->a[206339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_10317(v);
}

void	small_parse_table_10317(t_small_parse_table_array *v)
{
	v->a[206340] = actions(9386);
	v->a[206341] = 1;
	v->a[206342] = anon_sym_BQUOTE;
	v->a[206343] = actions(9388);
	v->a[206344] = 1;
	v->a[206345] = anon_sym_DOLLAR_BQUOTE;
	v->a[206346] = actions(9392);
	v->a[206347] = 1;
	v->a[206348] = sym_variable_name;
	v->a[206349] = actions(9592);
	v->a[206350] = 1;
	v->a[206351] = aux_sym__simple_variable_name_token1;
	v->a[206352] = state(3391);
	v->a[206353] = 1;
	v->a[206354] = sym__arithmetic_binary_expression;
	v->a[206355] = state(3396);
	v->a[206356] = 1;
	v->a[206357] = sym__arithmetic_ternary_expression;
	v->a[206358] = state(3398);
	v->a[206359] = 1;
	small_parse_table_10318(v);
}

void	small_parse_table_10318(t_small_parse_table_array *v)
{
	v->a[206360] = sym__arithmetic_unary_expression;
	v->a[206361] = state(3400);
	v->a[206362] = 1;
	v->a[206363] = sym__arithmetic_postfix_expression;
	v->a[206364] = actions(9368);
	v->a[206365] = 2;
	v->a[206366] = anon_sym_PLUS_PLUS2;
	v->a[206367] = anon_sym_DASH_DASH2;
	v->a[206368] = actions(9370);
	v->a[206369] = 2;
	v->a[206370] = anon_sym_DASH2;
	v->a[206371] = anon_sym_PLUS2;
	v->a[206372] = state(3343);
	v->a[206373] = 9;
	v->a[206374] = sym_subscript;
	v->a[206375] = sym__arithmetic_expression;
	v->a[206376] = sym__arithmetic_literal;
	v->a[206377] = sym__arithmetic_parenthesized_expression;
	v->a[206378] = sym_string;
	v->a[206379] = sym_number;
	small_parse_table_10319(v);
}

void	small_parse_table_10319(t_small_parse_table_array *v)
{
	v->a[206380] = sym_simple_expansion;
	v->a[206381] = sym_expansion;
	v->a[206382] = sym_command_substitution;
	v->a[206383] = 21;
	v->a[206384] = actions(71);
	v->a[206385] = 1;
	v->a[206386] = sym_comment;
	v->a[206387] = actions(3064);
	v->a[206388] = 1;
	v->a[206389] = sym_variable_name;
	v->a[206390] = actions(9278);
	v->a[206391] = 1;
	v->a[206392] = anon_sym_LPAREN;
	v->a[206393] = actions(9280);
	v->a[206394] = 1;
	v->a[206395] = anon_sym_BANG;
	v->a[206396] = actions(9286);
	v->a[206397] = 1;
	v->a[206398] = anon_sym_TILDE;
	v->a[206399] = actions(9288);
	small_parse_table_10320(v);
}

/* EOF small_parse_table_2063.c */
