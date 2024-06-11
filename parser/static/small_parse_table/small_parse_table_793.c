/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_793.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3965(t_small_parse_table_array *v)
{
	v->a[79300] = sym_raw_string;
	v->a[79301] = sym_number;
	v->a[79302] = sym_word;
	v->a[79303] = state(2157);
	v->a[79304] = 5;
	v->a[79305] = sym_arithmetic_expansion;
	v->a[79306] = sym_string;
	v->a[79307] = sym_simple_expansion;
	v->a[79308] = sym_expansion;
	v->a[79309] = sym_command_substitution;
	v->a[79310] = 3;
	v->a[79311] = actions(3);
	v->a[79312] = 1;
	v->a[79313] = sym_comment;
	v->a[79314] = actions(2687);
	v->a[79315] = 2;
	v->a[79316] = sym_file_descriptor;
	v->a[79317] = aux_sym_heredoc_redirect_token1;
	v->a[79318] = actions(2689);
	v->a[79319] = 19;
	small_parse_table_3966(v);
}

void	small_parse_table_3966(t_small_parse_table_array *v)
{
	v->a[79320] = anon_sym_esac;
	v->a[79321] = anon_sym_PIPE;
	v->a[79322] = anon_sym_SEMI_SEMI;
	v->a[79323] = anon_sym_AMP_AMP;
	v->a[79324] = anon_sym_PIPE_PIPE;
	v->a[79325] = anon_sym_LT;
	v->a[79326] = anon_sym_GT;
	v->a[79327] = anon_sym_GT_GT;
	v->a[79328] = anon_sym_AMP_GT;
	v->a[79329] = anon_sym_AMP_GT_GT;
	v->a[79330] = anon_sym_LT_AMP;
	v->a[79331] = anon_sym_GT_AMP;
	v->a[79332] = anon_sym_GT_PIPE;
	v->a[79333] = anon_sym_LT_AMP_DASH;
	v->a[79334] = anon_sym_GT_AMP_DASH;
	v->a[79335] = anon_sym_LT_LT;
	v->a[79336] = anon_sym_LT_LT_DASH;
	v->a[79337] = anon_sym_AMP;
	v->a[79338] = anon_sym_SEMI;
	v->a[79339] = 15;
	small_parse_table_3967(v);
}

void	small_parse_table_3967(t_small_parse_table_array *v)
{
	v->a[79340] = actions(3);
	v->a[79341] = 1;
	v->a[79342] = sym_comment;
	v->a[79343] = actions(1959);
	v->a[79344] = 1;
	v->a[79345] = anon_sym_LPAREN;
	v->a[79346] = actions(1963);
	v->a[79347] = 1;
	v->a[79348] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79349] = actions(1965);
	v->a[79350] = 1;
	v->a[79351] = anon_sym_DOLLAR;
	v->a[79352] = actions(1967);
	v->a[79353] = 1;
	v->a[79354] = anon_sym_DQUOTE;
	v->a[79355] = actions(1969);
	v->a[79356] = 1;
	v->a[79357] = anon_sym_DOLLAR_LBRACE;
	v->a[79358] = actions(1971);
	v->a[79359] = 1;
	small_parse_table_3968(v);
}

void	small_parse_table_3968(t_small_parse_table_array *v)
{
	v->a[79360] = anon_sym_DOLLAR_LPAREN;
	v->a[79361] = actions(1973);
	v->a[79362] = 1;
	v->a[79363] = anon_sym_BQUOTE;
	v->a[79364] = actions(1975);
	v->a[79365] = 1;
	v->a[79366] = sym_extglob_pattern;
	v->a[79367] = state(1547);
	v->a[79368] = 1;
	v->a[79369] = aux_sym_case_statement_repeat1;
	v->a[79370] = state(2080);
	v->a[79371] = 1;
	v->a[79372] = sym_case_item;
	v->a[79373] = state(2298);
	v->a[79374] = 1;
	v->a[79375] = sym__case_item_last;
	v->a[79376] = state(2224);
	v->a[79377] = 2;
	v->a[79378] = sym_concatenation;
	v->a[79379] = sym__extglob_blob;
	small_parse_table_3969(v);
}

void	small_parse_table_3969(t_small_parse_table_array *v)
{
	v->a[79380] = actions(1955);
	v->a[79381] = 3;
	v->a[79382] = sym_raw_string;
	v->a[79383] = sym_number;
	v->a[79384] = sym_word;
	v->a[79385] = state(2157);
	v->a[79386] = 5;
	v->a[79387] = sym_arithmetic_expansion;
	v->a[79388] = sym_string;
	v->a[79389] = sym_simple_expansion;
	v->a[79390] = sym_expansion;
	v->a[79391] = sym_command_substitution;
	v->a[79392] = 6;
	v->a[79393] = actions(3);
	v->a[79394] = 1;
	v->a[79395] = sym_comment;
	v->a[79396] = actions(2041);
	v->a[79397] = 1;
	v->a[79398] = aux_sym_concatenation_token1;
	v->a[79399] = actions(2917);
	small_parse_table_3970(v);
}

/* EOF small_parse_table_793.c */
