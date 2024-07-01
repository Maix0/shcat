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
	v->a[89300] = sym_extglob_pattern;
	v->a[89301] = actions(3674);
	v->a[89302] = 10;
	v->a[89303] = anon_sym_LPAREN;
	v->a[89304] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89305] = anon_sym_DOLLAR;
	v->a[89306] = anon_sym_DQUOTE;
	v->a[89307] = sym_raw_string;
	v->a[89308] = sym_number;
	v->a[89309] = anon_sym_DOLLAR_LBRACE;
	v->a[89310] = anon_sym_DOLLAR_LPAREN;
	v->a[89311] = anon_sym_BQUOTE;
	v->a[89312] = sym_word;
	v->a[89313] = 8;
	v->a[89314] = actions(870);
	v->a[89315] = 1;
	v->a[89316] = sym_comment;
	v->a[89317] = actions(3770);
	v->a[89318] = 1;
	v->a[89319] = anon_sym_DOLLAR;
	small_parse_table_4466(v);
}

void	small_parse_table_4466(t_small_parse_table_array *v)
{
	v->a[89320] = actions(3773);
	v->a[89321] = 1;
	v->a[89322] = anon_sym_DOLLAR_LBRACE;
	v->a[89323] = actions(3776);
	v->a[89324] = 1;
	v->a[89325] = anon_sym_DOLLAR_LPAREN;
	v->a[89326] = actions(3779);
	v->a[89327] = 1;
	v->a[89328] = anon_sym_BQUOTE;
	v->a[89329] = actions(3782);
	v->a[89330] = 1;
	v->a[89331] = sym_heredoc_content;
	v->a[89332] = actions(3785);
	v->a[89333] = 1;
	v->a[89334] = sym_heredoc_end;
	v->a[89335] = state(1928);
	v->a[89336] = 4;
	v->a[89337] = sym_simple_expansion;
	v->a[89338] = sym_expansion;
	v->a[89339] = sym_command_substitution;
	small_parse_table_4467(v);
}

void	small_parse_table_4467(t_small_parse_table_array *v)
{
	v->a[89340] = aux_sym_heredoc_body_repeat1;
	v->a[89341] = 6;
	v->a[89342] = actions(870);
	v->a[89343] = 1;
	v->a[89344] = sym_comment;
	v->a[89345] = actions(3793);
	v->a[89346] = 1;
	v->a[89347] = anon_sym_LT_LT;
	v->a[89348] = actions(3795);
	v->a[89349] = 1;
	v->a[89350] = anon_sym_LT_LT_DASH;
	v->a[89351] = actions(3789);
	v->a[89352] = 2;
	v->a[89353] = anon_sym_GT_GT;
	v->a[89354] = anon_sym_GT_PIPE;
	v->a[89355] = actions(3791);
	v->a[89356] = 2;
	v->a[89357] = anon_sym_LT_AMP_DASH;
	v->a[89358] = anon_sym_GT_AMP_DASH;
	v->a[89359] = actions(3787);
	small_parse_table_4468(v);
}

void	small_parse_table_4468(t_small_parse_table_array *v)
{
	v->a[89360] = 4;
	v->a[89361] = anon_sym_LT;
	v->a[89362] = anon_sym_GT;
	v->a[89363] = anon_sym_LT_AMP;
	v->a[89364] = anon_sym_GT_AMP;
	v->a[89365] = 6;
	v->a[89366] = actions(870);
	v->a[89367] = 1;
	v->a[89368] = sym_comment;
	v->a[89369] = actions(3793);
	v->a[89370] = 1;
	v->a[89371] = anon_sym_LT_LT;
	v->a[89372] = actions(3795);
	v->a[89373] = 1;
	v->a[89374] = anon_sym_LT_LT_DASH;
	v->a[89375] = actions(3799);
	v->a[89376] = 2;
	v->a[89377] = anon_sym_GT_GT;
	v->a[89378] = anon_sym_GT_PIPE;
	v->a[89379] = actions(3801);
	small_parse_table_4469(v);
}

void	small_parse_table_4469(t_small_parse_table_array *v)
{
	v->a[89380] = 2;
	v->a[89381] = anon_sym_LT_AMP_DASH;
	v->a[89382] = anon_sym_GT_AMP_DASH;
	v->a[89383] = actions(3797);
	v->a[89384] = 4;
	v->a[89385] = anon_sym_LT;
	v->a[89386] = anon_sym_GT;
	v->a[89387] = anon_sym_LT_AMP;
	v->a[89388] = anon_sym_GT_AMP;
	v->a[89389] = 8;
	v->a[89390] = actions(870);
	v->a[89391] = 1;
	v->a[89392] = sym_comment;
	v->a[89393] = actions(3803);
	v->a[89394] = 1;
	v->a[89395] = anon_sym_DOLLAR;
	v->a[89396] = actions(3805);
	v->a[89397] = 1;
	v->a[89398] = anon_sym_DOLLAR_LBRACE;
	v->a[89399] = actions(3807);
	small_parse_table_4470(v);
}

/* EOF small_parse_table_893.c */
