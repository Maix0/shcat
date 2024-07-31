/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_163.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_815(t_small_parse_table_array *v)
{
	v->a[16300] = anon_sym_DASH;
	v->a[16301] = anon_sym_STAR;
	v->a[16302] = anon_sym_QMARK;
	v->a[16303] = anon_sym_DOLLAR;
	v->a[16304] = anon_sym_POUND;
	v->a[16305] = anon_sym_AT;
	v->a[16306] = anon_sym_0;
	v->a[16307] = actions(345);
	v->a[16308] = 24;
	v->a[16309] = anon_sym_esac;
	v->a[16310] = anon_sym_PIPE;
	v->a[16311] = anon_sym_SEMI_SEMI;
	v->a[16312] = anon_sym_AMP_AMP;
	v->a[16313] = anon_sym_PIPE_PIPE;
	v->a[16314] = anon_sym_LT;
	v->a[16315] = anon_sym_GT;
	v->a[16316] = anon_sym_GT_GT;
	v->a[16317] = anon_sym_LT_AMP;
	v->a[16318] = anon_sym_GT_AMP;
	v->a[16319] = anon_sym_GT_PIPE;
	small_parse_table_816(v);
}

void	small_parse_table_816(t_small_parse_table_array *v)
{
	v->a[16320] = anon_sym_LT_GT;
	v->a[16321] = anon_sym_LT_LT;
	v->a[16322] = anon_sym_LT_LT_DASH;
	v->a[16323] = aux_sym_heredoc_redirect_token1;
	v->a[16324] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16325] = anon_sym_DQUOTE;
	v->a[16326] = sym_raw_string;
	v->a[16327] = sym_number;
	v->a[16328] = anon_sym_DOLLAR_LBRACE;
	v->a[16329] = anon_sym_DOLLAR_LPAREN;
	v->a[16330] = anon_sym_BQUOTE;
	v->a[16331] = sym_word;
	v->a[16332] = anon_sym_SEMI;
	v->a[16333] = 6;
	v->a[16334] = actions(3);
	v->a[16335] = 1;
	v->a[16336] = sym_comment;
	v->a[16337] = actions(343);
	v->a[16338] = 1;
	v->a[16339] = sym__bare_dollar;
	small_parse_table_817(v);
}

void	small_parse_table_817(t_small_parse_table_array *v)
{
	v->a[16340] = actions(363);
	v->a[16341] = 1;
	v->a[16342] = sym_variable_name;
	v->a[16343] = actions(361);
	v->a[16344] = 2;
	v->a[16345] = aux_sym__simple_variable_name_token1;
	v->a[16346] = aux_sym__multiline_variable_name_token1;
	v->a[16347] = actions(359);
	v->a[16348] = 8;
	v->a[16349] = anon_sym_BANG;
	v->a[16350] = anon_sym_DASH;
	v->a[16351] = anon_sym_STAR;
	v->a[16352] = anon_sym_QMARK;
	v->a[16353] = anon_sym_DOLLAR;
	v->a[16354] = anon_sym_POUND;
	v->a[16355] = anon_sym_AT;
	v->a[16356] = anon_sym_0;
	v->a[16357] = actions(345);
	v->a[16358] = 23;
	v->a[16359] = anon_sym_PIPE;
	small_parse_table_818(v);
}

void	small_parse_table_818(t_small_parse_table_array *v)
{
	v->a[16360] = anon_sym_SEMI_SEMI;
	v->a[16361] = anon_sym_AMP_AMP;
	v->a[16362] = anon_sym_PIPE_PIPE;
	v->a[16363] = anon_sym_LT;
	v->a[16364] = anon_sym_GT;
	v->a[16365] = anon_sym_GT_GT;
	v->a[16366] = anon_sym_LT_AMP;
	v->a[16367] = anon_sym_GT_AMP;
	v->a[16368] = anon_sym_GT_PIPE;
	v->a[16369] = anon_sym_LT_GT;
	v->a[16370] = anon_sym_LT_LT;
	v->a[16371] = anon_sym_LT_LT_DASH;
	v->a[16372] = aux_sym_heredoc_redirect_token1;
	v->a[16373] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16374] = anon_sym_DQUOTE;
	v->a[16375] = sym_raw_string;
	v->a[16376] = sym_number;
	v->a[16377] = anon_sym_DOLLAR_LBRACE;
	v->a[16378] = anon_sym_DOLLAR_LPAREN;
	v->a[16379] = anon_sym_BQUOTE;
	small_parse_table_819(v);
}

void	small_parse_table_819(t_small_parse_table_array *v)
{
	v->a[16380] = sym_word;
	v->a[16381] = anon_sym_SEMI;
	v->a[16382] = 6;
	v->a[16383] = actions(3);
	v->a[16384] = 1;
	v->a[16385] = sym_comment;
	v->a[16386] = actions(343);
	v->a[16387] = 1;
	v->a[16388] = ts_builtin_sym_end;
	v->a[16389] = actions(381);
	v->a[16390] = 1;
	v->a[16391] = sym_variable_name;
	v->a[16392] = actions(379);
	v->a[16393] = 2;
	v->a[16394] = aux_sym__simple_variable_name_token1;
	v->a[16395] = aux_sym__multiline_variable_name_token1;
	v->a[16396] = actions(377);
	v->a[16397] = 8;
	v->a[16398] = anon_sym_BANG;
	v->a[16399] = anon_sym_DASH;
	small_parse_table_820(v);
}

/* EOF small_parse_table_163.c */
