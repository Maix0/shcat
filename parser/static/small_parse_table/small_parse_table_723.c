/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_723.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3615(t_small_parse_table_array *v)
{
	v->a[72300] = sym_string;
	v->a[72301] = sym_number;
	v->a[72302] = sym_simple_expansion;
	v->a[72303] = sym_expansion;
	v->a[72304] = sym_command_substitution;
	v->a[72305] = 5;
	v->a[72306] = actions(57);
	v->a[72307] = 1;
	v->a[72308] = sym_comment;
	v->a[72309] = actions(4382);
	v->a[72310] = 1;
	v->a[72311] = sym__special_character;
	v->a[72312] = state(1512);
	v->a[72313] = 1;
	v->a[72314] = aux_sym__literal_repeat1;
	v->a[72315] = actions(3340);
	v->a[72316] = 13;
	v->a[72317] = anon_sym_PIPE;
	v->a[72318] = anon_sym_LT;
	v->a[72319] = anon_sym_GT;
	small_parse_table_3616(v);
}

void	small_parse_table_3616(t_small_parse_table_array *v)
{
	v->a[72320] = anon_sym_AMP_GT;
	v->a[72321] = anon_sym_LT_AMP;
	v->a[72322] = anon_sym_GT_AMP;
	v->a[72323] = anon_sym_LT_LT;
	v->a[72324] = anon_sym_DOLLAR;
	v->a[72325] = aux_sym_number_token1;
	v->a[72326] = aux_sym_number_token2;
	v->a[72327] = anon_sym_DOLLAR_LPAREN;
	v->a[72328] = aux_sym__simple_variable_name_token1;
	v->a[72329] = sym_word;
	v->a[72330] = actions(3342);
	v->a[72331] = 19;
	v->a[72332] = sym_file_descriptor;
	v->a[72333] = sym_variable_name;
	v->a[72334] = sym_test_operator;
	v->a[72335] = sym__brace_start;
	v->a[72336] = anon_sym_PIPE_AMP;
	v->a[72337] = anon_sym_AMP_AMP;
	v->a[72338] = anon_sym_PIPE_PIPE;
	v->a[72339] = anon_sym_GT_GT;
	small_parse_table_3617(v);
}

void	small_parse_table_3617(t_small_parse_table_array *v)
{
	v->a[72340] = anon_sym_AMP_GT_GT;
	v->a[72341] = anon_sym_GT_PIPE;
	v->a[72342] = anon_sym_LT_AMP_DASH;
	v->a[72343] = anon_sym_GT_AMP_DASH;
	v->a[72344] = anon_sym_LT_LT_DASH;
	v->a[72345] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72346] = anon_sym_DQUOTE;
	v->a[72347] = sym_raw_string;
	v->a[72348] = anon_sym_DOLLAR_LBRACE;
	v->a[72349] = anon_sym_BQUOTE;
	v->a[72350] = anon_sym_DOLLAR_BQUOTE;
	v->a[72351] = 6;
	v->a[72352] = actions(3);
	v->a[72353] = 1;
	v->a[72354] = sym_comment;
	v->a[72355] = actions(816);
	v->a[72356] = 1;
	v->a[72357] = sym_file_descriptor;
	v->a[72358] = actions(4324);
	v->a[72359] = 1;
	small_parse_table_3618(v);
}

void	small_parse_table_3618(t_small_parse_table_array *v)
{
	v->a[72360] = sym_variable_name;
	v->a[72361] = actions(4322);
	v->a[72362] = 2;
	v->a[72363] = aux_sym__simple_variable_name_token1;
	v->a[72364] = aux_sym__multiline_variable_name_token1;
	v->a[72365] = actions(4320);
	v->a[72366] = 9;
	v->a[72367] = anon_sym_BANG;
	v->a[72368] = anon_sym_DASH;
	v->a[72369] = anon_sym_STAR;
	v->a[72370] = anon_sym_QMARK;
	v->a[72371] = anon_sym_DOLLAR;
	v->a[72372] = anon_sym_POUND;
	v->a[72373] = anon_sym_AT;
	v->a[72374] = anon_sym_0;
	v->a[72375] = anon_sym__;
	v->a[72376] = actions(810);
	v->a[72377] = 21;
	v->a[72378] = anon_sym_PIPE;
	v->a[72379] = anon_sym_RPAREN;
	small_parse_table_3619(v);
}

void	small_parse_table_3619(t_small_parse_table_array *v)
{
	v->a[72380] = anon_sym_SEMI_SEMI;
	v->a[72381] = anon_sym_PIPE_AMP;
	v->a[72382] = anon_sym_AMP_AMP;
	v->a[72383] = anon_sym_PIPE_PIPE;
	v->a[72384] = anon_sym_LT;
	v->a[72385] = anon_sym_GT;
	v->a[72386] = anon_sym_GT_GT;
	v->a[72387] = anon_sym_AMP_GT;
	v->a[72388] = anon_sym_AMP_GT_GT;
	v->a[72389] = anon_sym_LT_AMP;
	v->a[72390] = anon_sym_GT_AMP;
	v->a[72391] = anon_sym_GT_PIPE;
	v->a[72392] = anon_sym_LT_AMP_DASH;
	v->a[72393] = anon_sym_GT_AMP_DASH;
	v->a[72394] = anon_sym_LT_LT;
	v->a[72395] = anon_sym_LT_LT_DASH;
	v->a[72396] = aux_sym_heredoc_redirect_token1;
	v->a[72397] = anon_sym_AMP;
	v->a[72398] = anon_sym_SEMI;
	v->a[72399] = 24;
	small_parse_table_3620(v);
}

/* EOF small_parse_table_723.c */
