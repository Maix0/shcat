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
	v->a[24300] = 1;
	v->a[24301] = sym_comment;
	v->a[24302] = actions(1126);
	v->a[24303] = 2;
	v->a[24304] = sym__concat;
	v->a[24305] = sym__bare_dollar;
	v->a[24306] = actions(1124);
	v->a[24307] = 21;
	v->a[24308] = anon_sym_esac;
	v->a[24309] = anon_sym_PIPE;
	v->a[24310] = anon_sym_SEMI_SEMI;
	v->a[24311] = anon_sym_AMP_AMP;
	v->a[24312] = anon_sym_PIPE_PIPE;
	v->a[24313] = anon_sym_LT;
	v->a[24314] = anon_sym_GT;
	v->a[24315] = anon_sym_GT_GT;
	v->a[24316] = anon_sym_LT_LT;
	v->a[24317] = aux_sym_heredoc_redirect_token1;
	v->a[24318] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24319] = aux_sym_concatenation_token1;
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = anon_sym_DOLLAR;
	v->a[24321] = anon_sym_DQUOTE;
	v->a[24322] = sym_raw_string;
	v->a[24323] = sym_number;
	v->a[24324] = anon_sym_DOLLAR_LBRACE;
	v->a[24325] = anon_sym_DOLLAR_LPAREN;
	v->a[24326] = anon_sym_BQUOTE;
	v->a[24327] = sym_word;
	v->a[24328] = anon_sym_SEMI;
	v->a[24329] = 4;
	v->a[24330] = actions(3);
	v->a[24331] = 1;
	v->a[24332] = sym_comment;
	v->a[24333] = actions(1044);
	v->a[24334] = 1;
	v->a[24335] = sym_variable_name;
	v->a[24336] = actions(1042);
	v->a[24337] = 2;
	v->a[24338] = anon_sym_esac;
	v->a[24339] = anon_sym_SEMI_SEMI;
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = actions(1040);
	v->a[24341] = 20;
	v->a[24342] = anon_sym_for;
	v->a[24343] = anon_sym_while;
	v->a[24344] = anon_sym_until;
	v->a[24345] = anon_sym_if;
	v->a[24346] = anon_sym_case;
	v->a[24347] = anon_sym_LPAREN;
	v->a[24348] = anon_sym_LBRACE;
	v->a[24349] = anon_sym_BANG;
	v->a[24350] = anon_sym_LT;
	v->a[24351] = anon_sym_GT;
	v->a[24352] = anon_sym_GT_GT;
	v->a[24353] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24354] = anon_sym_DOLLAR;
	v->a[24355] = anon_sym_DQUOTE;
	v->a[24356] = sym_raw_string;
	v->a[24357] = sym_number;
	v->a[24358] = anon_sym_DOLLAR_LBRACE;
	v->a[24359] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = anon_sym_BQUOTE;
	v->a[24361] = sym_word;
	v->a[24362] = 3;
	v->a[24363] = actions(3);
	v->a[24364] = 1;
	v->a[24365] = sym_comment;
	v->a[24366] = actions(1050);
	v->a[24367] = 2;
	v->a[24368] = sym__concat;
	v->a[24369] = sym_variable_name;
	v->a[24370] = actions(1052);
	v->a[24371] = 21;
	v->a[24372] = anon_sym_esac;
	v->a[24373] = anon_sym_PIPE;
	v->a[24374] = anon_sym_SEMI_SEMI;
	v->a[24375] = anon_sym_AMP_AMP;
	v->a[24376] = anon_sym_PIPE_PIPE;
	v->a[24377] = anon_sym_LT;
	v->a[24378] = anon_sym_GT;
	v->a[24379] = anon_sym_GT_GT;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = anon_sym_LT_LT;
	v->a[24381] = aux_sym_heredoc_redirect_token1;
	v->a[24382] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24383] = aux_sym_concatenation_token1;
	v->a[24384] = anon_sym_DOLLAR;
	v->a[24385] = anon_sym_DQUOTE;
	v->a[24386] = sym_raw_string;
	v->a[24387] = sym_number;
	v->a[24388] = anon_sym_DOLLAR_LBRACE;
	v->a[24389] = anon_sym_DOLLAR_LPAREN;
	v->a[24390] = anon_sym_BQUOTE;
	v->a[24391] = sym_word;
	v->a[24392] = anon_sym_SEMI;
	v->a[24393] = 3;
	v->a[24394] = actions(3);
	v->a[24395] = 1;
	v->a[24396] = sym_comment;
	v->a[24397] = actions(1054);
	v->a[24398] = 2;
	v->a[24399] = sym__concat;
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
