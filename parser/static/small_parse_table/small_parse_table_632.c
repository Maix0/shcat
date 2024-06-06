/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_632.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3160(t_small_parse_table_array *v)
{
	v->a[63200] = 4;
	v->a[63201] = sym_file_descriptor;
	v->a[63202] = sym_test_operator;
	v->a[63203] = sym__brace_start;
	v->a[63204] = aux_sym_heredoc_redirect_token1;
	v->a[63205] = actions(2694);
	v->a[63206] = 29;
	v->a[63207] = anon_sym_PIPE;
	v->a[63208] = anon_sym_PIPE_AMP;
	v->a[63209] = anon_sym_AMP_AMP;
	v->a[63210] = anon_sym_PIPE_PIPE;
	v->a[63211] = anon_sym_LT;
	v->a[63212] = anon_sym_GT;
	v->a[63213] = anon_sym_GT_GT;
	v->a[63214] = anon_sym_AMP_GT;
	v->a[63215] = anon_sym_AMP_GT_GT;
	v->a[63216] = anon_sym_LT_AMP;
	v->a[63217] = anon_sym_GT_AMP;
	v->a[63218] = anon_sym_GT_PIPE;
	v->a[63219] = anon_sym_LT_AMP_DASH;
	small_parse_table_3161(v);
}

void	small_parse_table_3161(t_small_parse_table_array *v)
{
	v->a[63220] = anon_sym_GT_AMP_DASH;
	v->a[63221] = anon_sym_LT_LT;
	v->a[63222] = anon_sym_LT_LT_DASH;
	v->a[63223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63224] = anon_sym_DOLLAR;
	v->a[63225] = sym__special_character;
	v->a[63226] = anon_sym_DQUOTE;
	v->a[63227] = sym_raw_string;
	v->a[63228] = aux_sym_number_token1;
	v->a[63229] = aux_sym_number_token2;
	v->a[63230] = anon_sym_DOLLAR_LBRACE;
	v->a[63231] = anon_sym_DOLLAR_LPAREN;
	v->a[63232] = anon_sym_BQUOTE;
	v->a[63233] = anon_sym_DOLLAR_BQUOTE;
	v->a[63234] = aux_sym__simple_variable_name_token1;
	v->a[63235] = sym_word;
	v->a[63236] = 6;
	v->a[63237] = actions(3);
	v->a[63238] = 1;
	v->a[63239] = sym_comment;
	small_parse_table_3162(v);
}

void	small_parse_table_3162(t_small_parse_table_array *v)
{
	v->a[63240] = actions(816);
	v->a[63241] = 1;
	v->a[63242] = sym_file_descriptor;
	v->a[63243] = actions(4067);
	v->a[63244] = 1;
	v->a[63245] = sym_variable_name;
	v->a[63246] = actions(4065);
	v->a[63247] = 2;
	v->a[63248] = aux_sym__simple_variable_name_token1;
	v->a[63249] = aux_sym__multiline_variable_name_token1;
	v->a[63250] = actions(4063);
	v->a[63251] = 9;
	v->a[63252] = anon_sym_BANG;
	v->a[63253] = anon_sym_DASH;
	v->a[63254] = anon_sym_STAR;
	v->a[63255] = anon_sym_QMARK;
	v->a[63256] = anon_sym_DOLLAR;
	v->a[63257] = anon_sym_POUND;
	v->a[63258] = anon_sym_AT;
	v->a[63259] = anon_sym_0;
	small_parse_table_3163(v);
}

void	small_parse_table_3163(t_small_parse_table_array *v)
{
	v->a[63260] = anon_sym__;
	v->a[63261] = actions(810);
	v->a[63262] = 23;
	v->a[63263] = anon_sym_esac;
	v->a[63264] = anon_sym_PIPE;
	v->a[63265] = anon_sym_SEMI_SEMI;
	v->a[63266] = anon_sym_SEMI_AMP;
	v->a[63267] = anon_sym_SEMI_SEMI_AMP;
	v->a[63268] = anon_sym_PIPE_AMP;
	v->a[63269] = anon_sym_AMP_AMP;
	v->a[63270] = anon_sym_PIPE_PIPE;
	v->a[63271] = anon_sym_LT;
	v->a[63272] = anon_sym_GT;
	v->a[63273] = anon_sym_GT_GT;
	v->a[63274] = anon_sym_AMP_GT;
	v->a[63275] = anon_sym_AMP_GT_GT;
	v->a[63276] = anon_sym_LT_AMP;
	v->a[63277] = anon_sym_GT_AMP;
	v->a[63278] = anon_sym_GT_PIPE;
	v->a[63279] = anon_sym_LT_AMP_DASH;
	small_parse_table_3164(v);
}

void	small_parse_table_3164(t_small_parse_table_array *v)
{
	v->a[63280] = anon_sym_GT_AMP_DASH;
	v->a[63281] = anon_sym_LT_LT;
	v->a[63282] = anon_sym_LT_LT_DASH;
	v->a[63283] = aux_sym_heredoc_redirect_token1;
	v->a[63284] = anon_sym_AMP;
	v->a[63285] = anon_sym_SEMI;
	v->a[63286] = 7;
	v->a[63287] = actions(3);
	v->a[63288] = 1;
	v->a[63289] = sym_comment;
	v->a[63290] = actions(3632);
	v->a[63291] = 1;
	v->a[63292] = aux_sym_heredoc_redirect_token1;
	v->a[63293] = actions(3634);
	v->a[63294] = 1;
	v->a[63295] = sym_file_descriptor;
	v->a[63296] = actions(3637);
	v->a[63297] = 3;
	v->a[63298] = sym_variable_name;
	v->a[63299] = sym_test_operator;
	small_parse_table_3165(v);
}

/* EOF small_parse_table_632.c */
