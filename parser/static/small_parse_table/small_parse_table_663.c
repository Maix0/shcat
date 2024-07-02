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
	v->a[66300] = sym_command_substitution;
	v->a[66301] = 10;
	v->a[66302] = actions(3);
	v->a[66303] = 1;
	v->a[66304] = sym_comment;
	v->a[66305] = actions(25);
	v->a[66306] = 1;
	v->a[66307] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66308] = actions(29);
	v->a[66309] = 1;
	v->a[66310] = anon_sym_DQUOTE;
	v->a[66311] = actions(33);
	v->a[66312] = 1;
	v->a[66313] = anon_sym_DOLLAR_LBRACE;
	v->a[66314] = actions(35);
	v->a[66315] = 1;
	v->a[66316] = anon_sym_DOLLAR_LPAREN;
	v->a[66317] = actions(37);
	v->a[66318] = 1;
	v->a[66319] = anon_sym_BQUOTE;
	small_parse_table_3316(v);
}

void	small_parse_table_3316(t_small_parse_table_array *v)
{
	v->a[66320] = actions(2508);
	v->a[66321] = 1;
	v->a[66322] = anon_sym_DOLLAR;
	v->a[66323] = actions(2510);
	v->a[66324] = 1;
	v->a[66325] = sym__bare_dollar;
	v->a[66326] = actions(2506);
	v->a[66327] = 5;
	v->a[66328] = aux_sym_concatenation_token1;
	v->a[66329] = sym_raw_string;
	v->a[66330] = sym_number;
	v->a[66331] = sym__comment_word;
	v->a[66332] = sym_word;
	v->a[66333] = state(428);
	v->a[66334] = 5;
	v->a[66335] = sym_arithmetic_expansion;
	v->a[66336] = sym_string;
	v->a[66337] = sym_simple_expansion;
	v->a[66338] = sym_expansion;
	v->a[66339] = sym_command_substitution;
	small_parse_table_3317(v);
}

void	small_parse_table_3317(t_small_parse_table_array *v)
{
	v->a[66340] = 5;
	v->a[66341] = actions(3);
	v->a[66342] = 1;
	v->a[66343] = sym_comment;
	v->a[66344] = actions(2512);
	v->a[66345] = 1;
	v->a[66346] = sym_variable_name;
	v->a[66347] = actions(1982);
	v->a[66348] = 2;
	v->a[66349] = sym_file_descriptor;
	v->a[66350] = aux_sym_heredoc_redirect_token1;
	v->a[66351] = state(1290);
	v->a[66352] = 2;
	v->a[66353] = sym_variable_assignment;
	v->a[66354] = aux_sym__variable_assignments_repeat1;
	v->a[66355] = actions(1980);
	v->a[66356] = 12;
	v->a[66357] = anon_sym_PIPE;
	v->a[66358] = anon_sym_AMP_AMP;
	v->a[66359] = anon_sym_PIPE_PIPE;
	small_parse_table_3318(v);
}

void	small_parse_table_3318(t_small_parse_table_array *v)
{
	v->a[66360] = anon_sym_LT;
	v->a[66361] = anon_sym_GT;
	v->a[66362] = anon_sym_GT_GT;
	v->a[66363] = anon_sym_LT_AMP;
	v->a[66364] = anon_sym_GT_AMP;
	v->a[66365] = anon_sym_GT_PIPE;
	v->a[66366] = anon_sym_LT_GT;
	v->a[66367] = anon_sym_LT_LT;
	v->a[66368] = anon_sym_LT_LT_DASH;
	v->a[66369] = 12;
	v->a[66370] = actions(3);
	v->a[66371] = 1;
	v->a[66372] = sym_comment;
	v->a[66373] = actions(2336);
	v->a[66374] = 1;
	v->a[66375] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66376] = actions(2338);
	v->a[66377] = 1;
	v->a[66378] = anon_sym_DOLLAR;
	v->a[66379] = actions(2340);
	small_parse_table_3319(v);
}

void	small_parse_table_3319(t_small_parse_table_array *v)
{
	v->a[66380] = 1;
	v->a[66381] = anon_sym_DQUOTE;
	v->a[66382] = actions(2342);
	v->a[66383] = 1;
	v->a[66384] = anon_sym_DOLLAR_LBRACE;
	v->a[66385] = actions(2344);
	v->a[66386] = 1;
	v->a[66387] = anon_sym_DOLLAR_LPAREN;
	v->a[66388] = actions(2346);
	v->a[66389] = 1;
	v->a[66390] = anon_sym_BQUOTE;
	v->a[66391] = actions(2516);
	v->a[66392] = 1;
	v->a[66393] = sym__comment_word;
	v->a[66394] = actions(2518);
	v->a[66395] = 1;
	v->a[66396] = sym__empty_value;
	v->a[66397] = state(1025);
	v->a[66398] = 1;
	v->a[66399] = sym_concatenation;
	small_parse_table_3320(v);
}

/* EOF small_parse_table_663.c */
