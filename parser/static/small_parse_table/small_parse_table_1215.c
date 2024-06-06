/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1215.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6075(t_small_parse_table_array *v)
{
	v->a[121500] = 1;
	v->a[121501] = anon_sym_DOLLAR;
	v->a[121502] = actions(6396);
	v->a[121503] = 1;
	v->a[121504] = anon_sym_DQUOTE;
	v->a[121505] = actions(6400);
	v->a[121506] = 1;
	v->a[121507] = aux_sym_number_token1;
	v->a[121508] = actions(6402);
	v->a[121509] = 1;
	v->a[121510] = aux_sym_number_token2;
	v->a[121511] = actions(6404);
	v->a[121512] = 1;
	v->a[121513] = anon_sym_DOLLAR_LBRACE;
	v->a[121514] = actions(6406);
	v->a[121515] = 1;
	v->a[121516] = anon_sym_DOLLAR_LPAREN;
	v->a[121517] = actions(6408);
	v->a[121518] = 1;
	v->a[121519] = anon_sym_BQUOTE;
	small_parse_table_6076(v);
}

void	small_parse_table_6076(t_small_parse_table_array *v)
{
	v->a[121520] = actions(6410);
	v->a[121521] = 1;
	v->a[121522] = anon_sym_DOLLAR_BQUOTE;
	v->a[121523] = actions(6412);
	v->a[121524] = 1;
	v->a[121525] = sym__brace_start;
	v->a[121526] = actions(6923);
	v->a[121527] = 1;
	v->a[121528] = sym_word;
	v->a[121529] = actions(6927);
	v->a[121530] = 1;
	v->a[121531] = sym__special_character;
	v->a[121532] = actions(6931);
	v->a[121533] = 1;
	v->a[121534] = sym__comment_word;
	v->a[121535] = actions(6929);
	v->a[121536] = 3;
	v->a[121537] = sym_test_operator;
	v->a[121538] = sym__bare_dollar;
	v->a[121539] = sym_raw_string;
	small_parse_table_6077(v);
}

void	small_parse_table_6077(t_small_parse_table_array *v)
{
	v->a[121540] = state(3240);
	v->a[121541] = 7;
	v->a[121542] = sym_arithmetic_expansion;
	v->a[121543] = sym_brace_expression;
	v->a[121544] = sym_string;
	v->a[121545] = sym_number;
	v->a[121546] = sym_simple_expansion;
	v->a[121547] = sym_expansion;
	v->a[121548] = sym_command_substitution;
	v->a[121549] = 16;
	v->a[121550] = actions(3);
	v->a[121551] = 1;
	v->a[121552] = sym_comment;
	v->a[121553] = actions(2466);
	v->a[121554] = 1;
	v->a[121555] = aux_sym_number_token1;
	v->a[121556] = actions(2468);
	v->a[121557] = 1;
	v->a[121558] = aux_sym_number_token2;
	v->a[121559] = actions(2472);
	small_parse_table_6078(v);
}

void	small_parse_table_6078(t_small_parse_table_array *v)
{
	v->a[121560] = 1;
	v->a[121561] = anon_sym_DOLLAR_LPAREN;
	v->a[121562] = actions(2482);
	v->a[121563] = 1;
	v->a[121564] = sym__brace_start;
	v->a[121565] = actions(6051);
	v->a[121566] = 1;
	v->a[121567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121568] = actions(6055);
	v->a[121569] = 1;
	v->a[121570] = anon_sym_DQUOTE;
	v->a[121571] = actions(6057);
	v->a[121572] = 1;
	v->a[121573] = anon_sym_DOLLAR_LBRACE;
	v->a[121574] = actions(6059);
	v->a[121575] = 1;
	v->a[121576] = anon_sym_BQUOTE;
	v->a[121577] = actions(6061);
	v->a[121578] = 1;
	v->a[121579] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_6079(v);
}

void	small_parse_table_6079(t_small_parse_table_array *v)
{
	v->a[121580] = actions(6779);
	v->a[121581] = 1;
	v->a[121582] = sym_word;
	v->a[121583] = actions(6781);
	v->a[121584] = 1;
	v->a[121585] = sym__special_character;
	v->a[121586] = actions(6785);
	v->a[121587] = 1;
	v->a[121588] = sym__comment_word;
	v->a[121589] = actions(7039);
	v->a[121590] = 1;
	v->a[121591] = anon_sym_DOLLAR;
	v->a[121592] = actions(6783);
	v->a[121593] = 3;
	v->a[121594] = sym_test_operator;
	v->a[121595] = sym__bare_dollar;
	v->a[121596] = sym_raw_string;
	v->a[121597] = state(2646);
	v->a[121598] = 7;
	v->a[121599] = sym_arithmetic_expansion;
	small_parse_table_6080(v);
}

/* EOF small_parse_table_1215.c */
