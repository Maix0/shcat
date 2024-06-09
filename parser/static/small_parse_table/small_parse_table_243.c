/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_243.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1215(t_small_parse_table_array *v)
{
	v->a[24300] = anon_sym_GT_AMP;
	v->a[24301] = anon_sym_GT_PIPE;
	v->a[24302] = anon_sym_LT_AMP_DASH;
	v->a[24303] = anon_sym_GT_AMP_DASH;
	v->a[24304] = anon_sym_LT_LT;
	v->a[24305] = anon_sym_LT_LT_DASH;
	v->a[24306] = aux_sym_heredoc_redirect_token1;
	v->a[24307] = anon_sym_AMP;
	v->a[24308] = anon_sym_SEMI;
	v->a[24309] = 16;
	v->a[24310] = actions(3);
	v->a[24311] = 1;
	v->a[24312] = sym_comment;
	v->a[24313] = actions(485);
	v->a[24314] = 1;
	v->a[24315] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24316] = actions(487);
	v->a[24317] = 1;
	v->a[24318] = anon_sym_DOLLAR;
	v->a[24319] = actions(489);
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = 1;
	v->a[24321] = anon_sym_DQUOTE;
	v->a[24322] = actions(491);
	v->a[24323] = 1;
	v->a[24324] = aux_sym_number_token1;
	v->a[24325] = actions(493);
	v->a[24326] = 1;
	v->a[24327] = aux_sym_number_token2;
	v->a[24328] = actions(495);
	v->a[24329] = 1;
	v->a[24330] = anon_sym_DOLLAR_LBRACE;
	v->a[24331] = actions(497);
	v->a[24332] = 1;
	v->a[24333] = anon_sym_DOLLAR_LPAREN;
	v->a[24334] = actions(499);
	v->a[24335] = 1;
	v->a[24336] = anon_sym_BQUOTE;
	v->a[24337] = actions(501);
	v->a[24338] = 1;
	v->a[24339] = sym__bare_dollar;
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = actions(563);
	v->a[24341] = 1;
	v->a[24342] = sym_file_descriptor;
	v->a[24343] = state(224);
	v->a[24344] = 1;
	v->a[24345] = aux_sym_command_repeat2;
	v->a[24346] = state(753);
	v->a[24347] = 1;
	v->a[24348] = sym_concatenation;
	v->a[24349] = actions(551);
	v->a[24350] = 2;
	v->a[24351] = sym_raw_string;
	v->a[24352] = sym_word;
	v->a[24353] = state(452);
	v->a[24354] = 6;
	v->a[24355] = sym_arithmetic_expansion;
	v->a[24356] = sym_string;
	v->a[24357] = sym_number;
	v->a[24358] = sym_simple_expansion;
	v->a[24359] = sym_expansion;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = sym_command_substitution;
	v->a[24361] = actions(561);
	v->a[24362] = 19;
	v->a[24363] = anon_sym_PIPE;
	v->a[24364] = anon_sym_SEMI_SEMI;
	v->a[24365] = anon_sym_AMP_AMP;
	v->a[24366] = anon_sym_PIPE_PIPE;
	v->a[24367] = anon_sym_LT;
	v->a[24368] = anon_sym_GT;
	v->a[24369] = anon_sym_GT_GT;
	v->a[24370] = anon_sym_AMP_GT;
	v->a[24371] = anon_sym_AMP_GT_GT;
	v->a[24372] = anon_sym_LT_AMP;
	v->a[24373] = anon_sym_GT_AMP;
	v->a[24374] = anon_sym_GT_PIPE;
	v->a[24375] = anon_sym_LT_AMP_DASH;
	v->a[24376] = anon_sym_GT_AMP_DASH;
	v->a[24377] = anon_sym_LT_LT;
	v->a[24378] = anon_sym_LT_LT_DASH;
	v->a[24379] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = anon_sym_AMP;
	v->a[24381] = anon_sym_SEMI;
	v->a[24382] = 14;
	v->a[24383] = actions(3);
	v->a[24384] = 1;
	v->a[24385] = sym_comment;
	v->a[24386] = actions(565);
	v->a[24387] = 1;
	v->a[24388] = sym_file_descriptor;
	v->a[24389] = actions(797);
	v->a[24390] = 1;
	v->a[24391] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24392] = actions(799);
	v->a[24393] = 1;
	v->a[24394] = anon_sym_DOLLAR;
	v->a[24395] = actions(801);
	v->a[24396] = 1;
	v->a[24397] = anon_sym_DQUOTE;
	v->a[24398] = actions(803);
	v->a[24399] = 1;
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
