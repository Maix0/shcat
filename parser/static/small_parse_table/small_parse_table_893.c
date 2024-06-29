/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_893.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4465(t_small_parse_table_array *v)
{
	v->a[89300] = 1;
	v->a[89301] = sym_comment;
	v->a[89302] = actions(3440);
	v->a[89303] = 1;
	v->a[89304] = anon_sym_LT_LT;
	v->a[89305] = actions(3442);
	v->a[89306] = 1;
	v->a[89307] = anon_sym_LT_LT_DASH;
	v->a[89308] = actions(3516);
	v->a[89309] = 2;
	v->a[89310] = anon_sym_LT_AMP_DASH;
	v->a[89311] = anon_sym_GT_AMP_DASH;
	v->a[89312] = actions(3514);
	v->a[89313] = 3;
	v->a[89314] = anon_sym_GT_GT;
	v->a[89315] = anon_sym_AMP_GT_GT;
	v->a[89316] = anon_sym_GT_PIPE;
	v->a[89317] = actions(3512);
	v->a[89318] = 5;
	v->a[89319] = anon_sym_LT;
	small_parse_table_4466(v);
}

void	small_parse_table_4466(t_small_parse_table_array *v)
{
	v->a[89320] = anon_sym_GT;
	v->a[89321] = anon_sym_AMP_GT;
	v->a[89322] = anon_sym_LT_AMP;
	v->a[89323] = anon_sym_GT_AMP;
	v->a[89324] = 10;
	v->a[89325] = actions(3);
	v->a[89326] = 1;
	v->a[89327] = sym_comment;
	v->a[89328] = actions(3414);
	v->a[89329] = 1;
	v->a[89330] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89331] = actions(3420);
	v->a[89332] = 1;
	v->a[89333] = sym_string_content;
	v->a[89334] = actions(3422);
	v->a[89335] = 1;
	v->a[89336] = anon_sym_DOLLAR_LBRACE;
	v->a[89337] = actions(3424);
	v->a[89338] = 1;
	v->a[89339] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4467(v);
}

void	small_parse_table_4467(t_small_parse_table_array *v)
{
	v->a[89340] = actions(3426);
	v->a[89341] = 1;
	v->a[89342] = anon_sym_BQUOTE;
	v->a[89343] = actions(3518);
	v->a[89344] = 1;
	v->a[89345] = anon_sym_DOLLAR;
	v->a[89346] = actions(3520);
	v->a[89347] = 1;
	v->a[89348] = anon_sym_DQUOTE;
	v->a[89349] = state(1863);
	v->a[89350] = 1;
	v->a[89351] = aux_sym_string_repeat1;
	v->a[89352] = state(1963);
	v->a[89353] = 4;
	v->a[89354] = sym_arithmetic_expansion;
	v->a[89355] = sym_simple_expansion;
	v->a[89356] = sym_expansion;
	v->a[89357] = sym_command_substitution;
	v->a[89358] = 10;
	v->a[89359] = actions(3);
	small_parse_table_4468(v);
}

void	small_parse_table_4468(t_small_parse_table_array *v)
{
	v->a[89360] = 1;
	v->a[89361] = sym_comment;
	v->a[89362] = actions(3414);
	v->a[89363] = 1;
	v->a[89364] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89365] = actions(3420);
	v->a[89366] = 1;
	v->a[89367] = sym_string_content;
	v->a[89368] = actions(3422);
	v->a[89369] = 1;
	v->a[89370] = anon_sym_DOLLAR_LBRACE;
	v->a[89371] = actions(3424);
	v->a[89372] = 1;
	v->a[89373] = anon_sym_DOLLAR_LPAREN;
	v->a[89374] = actions(3426);
	v->a[89375] = 1;
	v->a[89376] = anon_sym_BQUOTE;
	v->a[89377] = actions(3522);
	v->a[89378] = 1;
	v->a[89379] = anon_sym_DOLLAR;
	small_parse_table_4469(v);
}

void	small_parse_table_4469(t_small_parse_table_array *v)
{
	v->a[89380] = actions(3524);
	v->a[89381] = 1;
	v->a[89382] = anon_sym_DQUOTE;
	v->a[89383] = state(1863);
	v->a[89384] = 1;
	v->a[89385] = aux_sym_string_repeat1;
	v->a[89386] = state(1963);
	v->a[89387] = 4;
	v->a[89388] = sym_arithmetic_expansion;
	v->a[89389] = sym_simple_expansion;
	v->a[89390] = sym_expansion;
	v->a[89391] = sym_command_substitution;
	v->a[89392] = 4;
	v->a[89393] = actions(3);
	v->a[89394] = 1;
	v->a[89395] = sym_comment;
	v->a[89396] = actions(417);
	v->a[89397] = 1;
	v->a[89398] = sym_variable_name;
	v->a[89399] = actions(415);
	small_parse_table_4470(v);
}

/* EOF small_parse_table_893.c */
