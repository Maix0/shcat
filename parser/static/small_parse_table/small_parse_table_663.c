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
	v->a[66300] = 1;
	v->a[66301] = anon_sym_DQUOTE;
	v->a[66302] = actions(2468);
	v->a[66303] = 1;
	v->a[66304] = anon_sym_DOLLAR_LBRACE;
	v->a[66305] = actions(2470);
	v->a[66306] = 1;
	v->a[66307] = anon_sym_DOLLAR_LPAREN;
	v->a[66308] = actions(2472);
	v->a[66309] = 1;
	v->a[66310] = anon_sym_BQUOTE;
	v->a[66311] = actions(2474);
	v->a[66312] = 1;
	v->a[66313] = sym__bare_dollar;
	v->a[66314] = actions(2460);
	v->a[66315] = 5;
	v->a[66316] = aux_sym_concatenation_token1;
	v->a[66317] = sym_raw_string;
	v->a[66318] = sym_number;
	v->a[66319] = sym__comment_word;
	small_parse_table_3316(v);
}

void	small_parse_table_3316(t_small_parse_table_array *v)
{
	v->a[66320] = sym_word;
	v->a[66321] = state(456);
	v->a[66322] = 5;
	v->a[66323] = sym_arithmetic_expansion;
	v->a[66324] = sym_string;
	v->a[66325] = sym_simple_expansion;
	v->a[66326] = sym_expansion;
	v->a[66327] = sym_command_substitution;
	v->a[66328] = 12;
	v->a[66329] = actions(3);
	v->a[66330] = 1;
	v->a[66331] = sym_comment;
	v->a[66332] = actions(1074);
	v->a[66333] = 1;
	v->a[66334] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66335] = actions(1076);
	v->a[66336] = 1;
	v->a[66337] = anon_sym_DOLLAR;
	v->a[66338] = actions(1078);
	v->a[66339] = 1;
	small_parse_table_3317(v);
}

void	small_parse_table_3317(t_small_parse_table_array *v)
{
	v->a[66340] = anon_sym_DQUOTE;
	v->a[66341] = actions(1080);
	v->a[66342] = 1;
	v->a[66343] = anon_sym_DOLLAR_LBRACE;
	v->a[66344] = actions(1082);
	v->a[66345] = 1;
	v->a[66346] = anon_sym_DOLLAR_LPAREN;
	v->a[66347] = actions(1084);
	v->a[66348] = 1;
	v->a[66349] = anon_sym_BQUOTE;
	v->a[66350] = actions(2476);
	v->a[66351] = 1;
	v->a[66352] = aux_sym_heredoc_redirect_token1;
	v->a[66353] = state(1338);
	v->a[66354] = 1;
	v->a[66355] = aux_sym__heredoc_command;
	v->a[66356] = state(1721);
	v->a[66357] = 1;
	v->a[66358] = sym_concatenation;
	v->a[66359] = actions(1064);
	small_parse_table_3318(v);
}

void	small_parse_table_3318(t_small_parse_table_array *v)
{
	v->a[66360] = 3;
	v->a[66361] = sym_raw_string;
	v->a[66362] = sym_number;
	v->a[66363] = sym_word;
	v->a[66364] = state(1573);
	v->a[66365] = 5;
	v->a[66366] = sym_arithmetic_expansion;
	v->a[66367] = sym_string;
	v->a[66368] = sym_simple_expansion;
	v->a[66369] = sym_expansion;
	v->a[66370] = sym_command_substitution;
	v->a[66371] = 12;
	v->a[66372] = actions(3);
	v->a[66373] = 1;
	v->a[66374] = sym_comment;
	v->a[66375] = actions(2324);
	v->a[66376] = 1;
	v->a[66377] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66378] = actions(2328);
	v->a[66379] = 1;
	small_parse_table_3319(v);
}

void	small_parse_table_3319(t_small_parse_table_array *v)
{
	v->a[66380] = anon_sym_DQUOTE;
	v->a[66381] = actions(2330);
	v->a[66382] = 1;
	v->a[66383] = anon_sym_DOLLAR_LBRACE;
	v->a[66384] = actions(2332);
	v->a[66385] = 1;
	v->a[66386] = anon_sym_DOLLAR_LPAREN;
	v->a[66387] = actions(2334);
	v->a[66388] = 1;
	v->a[66389] = anon_sym_BQUOTE;
	v->a[66390] = actions(2360);
	v->a[66391] = 1;
	v->a[66392] = anon_sym_DOLLAR;
	v->a[66393] = actions(2480);
	v->a[66394] = 1;
	v->a[66395] = sym__comment_word;
	v->a[66396] = actions(2482);
	v->a[66397] = 1;
	v->a[66398] = sym__empty_value;
	v->a[66399] = state(1078);
	small_parse_table_3320(v);
}

/* EOF small_parse_table_663.c */
