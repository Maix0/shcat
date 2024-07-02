/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_333.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1665(t_small_parse_table_array *v)
{
	v->a[33300] = actions(3);
	v->a[33301] = 1;
	v->a[33302] = sym_comment;
	v->a[33303] = actions(1156);
	v->a[33304] = 1;
	v->a[33305] = aux_sym_concatenation_token1;
	v->a[33306] = actions(1160);
	v->a[33307] = 1;
	v->a[33308] = sym__concat;
	v->a[33309] = state(388);
	v->a[33310] = 1;
	v->a[33311] = aux_sym_concatenation_repeat1;
	v->a[33312] = actions(1194);
	v->a[33313] = 2;
	v->a[33314] = sym_file_descriptor;
	v->a[33315] = sym_variable_name;
	v->a[33316] = actions(1196);
	v->a[33317] = 26;
	v->a[33318] = anon_sym_esac;
	v->a[33319] = anon_sym_PIPE;
	small_parse_table_1666(v);
}

void	small_parse_table_1666(t_small_parse_table_array *v)
{
	v->a[33320] = anon_sym_SEMI_SEMI;
	v->a[33321] = anon_sym_AMP_AMP;
	v->a[33322] = anon_sym_PIPE_PIPE;
	v->a[33323] = anon_sym_LT;
	v->a[33324] = anon_sym_GT;
	v->a[33325] = anon_sym_GT_GT;
	v->a[33326] = anon_sym_LT_AMP;
	v->a[33327] = anon_sym_GT_AMP;
	v->a[33328] = anon_sym_GT_PIPE;
	v->a[33329] = anon_sym_LT_GT;
	v->a[33330] = anon_sym_LT_LT;
	v->a[33331] = anon_sym_LT_LT_DASH;
	v->a[33332] = aux_sym_heredoc_redirect_token1;
	v->a[33333] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33334] = anon_sym_AMP;
	v->a[33335] = anon_sym_DOLLAR;
	v->a[33336] = anon_sym_DQUOTE;
	v->a[33337] = sym_raw_string;
	v->a[33338] = sym_number;
	v->a[33339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1667(v);
}

void	small_parse_table_1667(t_small_parse_table_array *v)
{
	v->a[33340] = anon_sym_DOLLAR_LPAREN;
	v->a[33341] = anon_sym_BQUOTE;
	v->a[33342] = sym_word;
	v->a[33343] = anon_sym_SEMI;
	v->a[33344] = 3;
	v->a[33345] = actions(3);
	v->a[33346] = 1;
	v->a[33347] = sym_comment;
	v->a[33348] = actions(709);
	v->a[33349] = 4;
	v->a[33350] = sym_file_descriptor;
	v->a[33351] = sym__concat;
	v->a[33352] = sym__bare_dollar;
	v->a[33353] = ts_builtin_sym_end;
	v->a[33354] = actions(707);
	v->a[33355] = 27;
	v->a[33356] = anon_sym_LPAREN;
	v->a[33357] = anon_sym_PIPE;
	v->a[33358] = anon_sym_SEMI_SEMI;
	v->a[33359] = anon_sym_AMP_AMP;
	small_parse_table_1668(v);
}

void	small_parse_table_1668(t_small_parse_table_array *v)
{
	v->a[33360] = anon_sym_PIPE_PIPE;
	v->a[33361] = anon_sym_LT;
	v->a[33362] = anon_sym_GT;
	v->a[33363] = anon_sym_GT_GT;
	v->a[33364] = anon_sym_LT_AMP;
	v->a[33365] = anon_sym_GT_AMP;
	v->a[33366] = anon_sym_GT_PIPE;
	v->a[33367] = anon_sym_LT_GT;
	v->a[33368] = anon_sym_LT_LT;
	v->a[33369] = anon_sym_LT_LT_DASH;
	v->a[33370] = aux_sym_heredoc_redirect_token1;
	v->a[33371] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33372] = anon_sym_AMP;
	v->a[33373] = aux_sym_concatenation_token1;
	v->a[33374] = anon_sym_DOLLAR;
	v->a[33375] = anon_sym_DQUOTE;
	v->a[33376] = sym_raw_string;
	v->a[33377] = sym_number;
	v->a[33378] = anon_sym_DOLLAR_LBRACE;
	v->a[33379] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1669(v);
}

void	small_parse_table_1669(t_small_parse_table_array *v)
{
	v->a[33380] = anon_sym_BQUOTE;
	v->a[33381] = sym_word;
	v->a[33382] = anon_sym_SEMI;
	v->a[33383] = 20;
	v->a[33384] = actions(3);
	v->a[33385] = 1;
	v->a[33386] = sym_comment;
	v->a[33387] = actions(17);
	v->a[33388] = 1;
	v->a[33389] = anon_sym_LPAREN;
	v->a[33390] = actions(25);
	v->a[33391] = 1;
	v->a[33392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33393] = actions(27);
	v->a[33394] = 1;
	v->a[33395] = anon_sym_DOLLAR;
	v->a[33396] = actions(29);
	v->a[33397] = 1;
	v->a[33398] = anon_sym_DQUOTE;
	v->a[33399] = actions(33);
	small_parse_table_1670(v);
}

/* EOF small_parse_table_333.c */
