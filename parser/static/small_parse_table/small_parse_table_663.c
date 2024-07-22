/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_663.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3315(t_small_parse_table_array *v)
{
	v->a[66300] = actions(2349);
	v->a[66301] = 1;
	v->a[66302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66303] = actions(2353);
	v->a[66304] = 1;
	v->a[66305] = anon_sym_DQUOTE;
	v->a[66306] = actions(2355);
	v->a[66307] = 1;
	v->a[66308] = anon_sym_DOLLAR_LBRACE;
	v->a[66309] = actions(2357);
	v->a[66310] = 1;
	v->a[66311] = anon_sym_DOLLAR_LPAREN;
	v->a[66312] = actions(2359);
	v->a[66313] = 1;
	v->a[66314] = anon_sym_BQUOTE;
	v->a[66315] = actions(2361);
	v->a[66316] = 1;
	v->a[66317] = sym__bare_dollar;
	v->a[66318] = actions(2637);
	v->a[66319] = 1;
	small_parse_table_3316(v);
}

void	small_parse_table_3316(t_small_parse_table_array *v)
{
	v->a[66320] = anon_sym_DOLLAR;
	v->a[66321] = actions(2347);
	v->a[66322] = 5;
	v->a[66323] = aux_sym_concatenation_token1;
	v->a[66324] = sym_raw_string;
	v->a[66325] = sym_number;
	v->a[66326] = sym__comment_word;
	v->a[66327] = sym_word;
	v->a[66328] = state(521);
	v->a[66329] = 5;
	v->a[66330] = sym_arithmetic_expansion;
	v->a[66331] = sym_string;
	v->a[66332] = sym_simple_expansion;
	v->a[66333] = sym_expansion;
	v->a[66334] = sym_command_substitution;
	v->a[66335] = 12;
	v->a[66336] = actions(3);
	v->a[66337] = 1;
	v->a[66338] = sym_comment;
	v->a[66339] = actions(2331);
	small_parse_table_3317(v);
}

void	small_parse_table_3317(t_small_parse_table_array *v)
{
	v->a[66340] = 1;
	v->a[66341] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66342] = actions(2335);
	v->a[66343] = 1;
	v->a[66344] = anon_sym_DQUOTE;
	v->a[66345] = actions(2337);
	v->a[66346] = 1;
	v->a[66347] = anon_sym_DOLLAR_LBRACE;
	v->a[66348] = actions(2339);
	v->a[66349] = 1;
	v->a[66350] = anon_sym_DOLLAR_LPAREN;
	v->a[66351] = actions(2341);
	v->a[66352] = 1;
	v->a[66353] = anon_sym_BQUOTE;
	v->a[66354] = actions(2567);
	v->a[66355] = 1;
	v->a[66356] = anon_sym_DOLLAR;
	v->a[66357] = actions(2641);
	v->a[66358] = 1;
	v->a[66359] = sym__comment_word;
	small_parse_table_3318(v);
}

void	small_parse_table_3318(t_small_parse_table_array *v)
{
	v->a[66360] = actions(2643);
	v->a[66361] = 1;
	v->a[66362] = sym__empty_value;
	v->a[66363] = state(700);
	v->a[66364] = 1;
	v->a[66365] = sym_concatenation;
	v->a[66366] = actions(2639);
	v->a[66367] = 3;
	v->a[66368] = sym_raw_string;
	v->a[66369] = sym_number;
	v->a[66370] = sym_word;
	v->a[66371] = state(675);
	v->a[66372] = 5;
	v->a[66373] = sym_arithmetic_expansion;
	v->a[66374] = sym_string;
	v->a[66375] = sym_simple_expansion;
	v->a[66376] = sym_expansion;
	v->a[66377] = sym_command_substitution;
	v->a[66378] = 3;
	v->a[66379] = actions(3);
	small_parse_table_3319(v);
}

void	small_parse_table_3319(t_small_parse_table_array *v)
{
	v->a[66380] = 1;
	v->a[66381] = sym_comment;
	v->a[66382] = actions(2135);
	v->a[66383] = 2;
	v->a[66384] = sym_file_descriptor;
	v->a[66385] = aux_sym_heredoc_redirect_token1;
	v->a[66386] = actions(2137);
	v->a[66387] = 15;
	v->a[66388] = anon_sym_esac;
	v->a[66389] = anon_sym_PIPE;
	v->a[66390] = anon_sym_SEMI_SEMI;
	v->a[66391] = anon_sym_AMP_AMP;
	v->a[66392] = anon_sym_PIPE_PIPE;
	v->a[66393] = anon_sym_LT;
	v->a[66394] = anon_sym_GT;
	v->a[66395] = anon_sym_GT_GT;
	v->a[66396] = anon_sym_LT_AMP;
	v->a[66397] = anon_sym_GT_AMP;
	v->a[66398] = anon_sym_GT_PIPE;
	v->a[66399] = anon_sym_LT_GT;
	small_parse_table_3320(v);
}

/* EOF small_parse_table_663.c */
