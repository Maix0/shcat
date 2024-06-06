/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_633.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3165(t_small_parse_table_array *v)
{
	v->a[63300] = sym__brace_start;
	v->a[63301] = actions(3627);
	v->a[63302] = 9;
	v->a[63303] = anon_sym_PIPE;
	v->a[63304] = anon_sym_SEMI_SEMI;
	v->a[63305] = anon_sym_PIPE_AMP;
	v->a[63306] = anon_sym_AMP_AMP;
	v->a[63307] = anon_sym_PIPE_PIPE;
	v->a[63308] = anon_sym_LT_LT;
	v->a[63309] = anon_sym_LT_LT_DASH;
	v->a[63310] = anon_sym_AMP;
	v->a[63311] = anon_sym_SEMI;
	v->a[63312] = actions(3625);
	v->a[63313] = 11;
	v->a[63314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63315] = anon_sym_DOLLAR;
	v->a[63316] = sym__special_character;
	v->a[63317] = anon_sym_DQUOTE;
	v->a[63318] = sym_raw_string;
	v->a[63319] = aux_sym_number_token1;
	small_parse_table_3166(v);
}

void	small_parse_table_3166(t_small_parse_table_array *v)
{
	v->a[63320] = aux_sym_number_token2;
	v->a[63321] = anon_sym_DOLLAR_LBRACE;
	v->a[63322] = anon_sym_DOLLAR_LPAREN;
	v->a[63323] = anon_sym_DOLLAR_BQUOTE;
	v->a[63324] = sym_word;
	v->a[63325] = actions(3629);
	v->a[63326] = 11;
	v->a[63327] = anon_sym_LT;
	v->a[63328] = anon_sym_GT;
	v->a[63329] = anon_sym_GT_GT;
	v->a[63330] = anon_sym_AMP_GT;
	v->a[63331] = anon_sym_AMP_GT_GT;
	v->a[63332] = anon_sym_LT_AMP;
	v->a[63333] = anon_sym_GT_AMP;
	v->a[63334] = anon_sym_GT_PIPE;
	v->a[63335] = anon_sym_LT_AMP_DASH;
	v->a[63336] = anon_sym_GT_AMP_DASH;
	v->a[63337] = anon_sym_BQUOTE;
	v->a[63338] = 6;
	v->a[63339] = actions(3);
	small_parse_table_3167(v);
}

void	small_parse_table_3167(t_small_parse_table_array *v)
{
	v->a[63340] = 1;
	v->a[63341] = sym_comment;
	v->a[63342] = actions(816);
	v->a[63343] = 1;
	v->a[63344] = sym_file_descriptor;
	v->a[63345] = actions(4075);
	v->a[63346] = 1;
	v->a[63347] = sym_variable_name;
	v->a[63348] = actions(4073);
	v->a[63349] = 2;
	v->a[63350] = aux_sym__simple_variable_name_token1;
	v->a[63351] = aux_sym__multiline_variable_name_token1;
	v->a[63352] = actions(4071);
	v->a[63353] = 9;
	v->a[63354] = anon_sym_BANG;
	v->a[63355] = anon_sym_DASH;
	v->a[63356] = anon_sym_STAR;
	v->a[63357] = anon_sym_QMARK;
	v->a[63358] = anon_sym_DOLLAR;
	v->a[63359] = anon_sym_POUND;
	small_parse_table_3168(v);
}

void	small_parse_table_3168(t_small_parse_table_array *v)
{
	v->a[63360] = anon_sym_AT;
	v->a[63361] = anon_sym_0;
	v->a[63362] = anon_sym__;
	v->a[63363] = actions(810);
	v->a[63364] = 23;
	v->a[63365] = anon_sym_esac;
	v->a[63366] = anon_sym_PIPE;
	v->a[63367] = anon_sym_SEMI_SEMI;
	v->a[63368] = anon_sym_SEMI_AMP;
	v->a[63369] = anon_sym_SEMI_SEMI_AMP;
	v->a[63370] = anon_sym_PIPE_AMP;
	v->a[63371] = anon_sym_AMP_AMP;
	v->a[63372] = anon_sym_PIPE_PIPE;
	v->a[63373] = anon_sym_LT;
	v->a[63374] = anon_sym_GT;
	v->a[63375] = anon_sym_GT_GT;
	v->a[63376] = anon_sym_AMP_GT;
	v->a[63377] = anon_sym_AMP_GT_GT;
	v->a[63378] = anon_sym_LT_AMP;
	v->a[63379] = anon_sym_GT_AMP;
	small_parse_table_3169(v);
}

void	small_parse_table_3169(t_small_parse_table_array *v)
{
	v->a[63380] = anon_sym_GT_PIPE;
	v->a[63381] = anon_sym_LT_AMP_DASH;
	v->a[63382] = anon_sym_GT_AMP_DASH;
	v->a[63383] = anon_sym_LT_LT;
	v->a[63384] = anon_sym_LT_LT_DASH;
	v->a[63385] = aux_sym_heredoc_redirect_token1;
	v->a[63386] = anon_sym_AMP;
	v->a[63387] = anon_sym_SEMI;
	v->a[63388] = 3;
	v->a[63389] = actions(3);
	v->a[63390] = 1;
	v->a[63391] = sym_comment;
	v->a[63392] = actions(2664);
	v->a[63393] = 5;
	v->a[63394] = sym_file_descriptor;
	v->a[63395] = sym_test_operator;
	v->a[63396] = sym__brace_start;
	v->a[63397] = ts_builtin_sym_end;
	v->a[63398] = aux_sym_heredoc_redirect_token1;
	v->a[63399] = actions(2662);
	small_parse_table_3170(v);
}

/* EOF small_parse_table_633.c */
