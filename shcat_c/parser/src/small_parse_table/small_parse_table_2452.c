/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2452.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12260(t_small_parse_table_array *v)
{
	v->a[245200] = anon_sym_GT_AMP;
	v->a[245201] = anon_sym_GT_PIPE;
	v->a[245202] = anon_sym_LT_AMP_DASH;
	v->a[245203] = anon_sym_GT_AMP_DASH;
	v->a[245204] = anon_sym_LT_LT_DASH;
	v->a[245205] = anon_sym_LT_LT_LT;
	v->a[245206] = 6;
	v->a[245207] = actions(3);
	v->a[245208] = 1;
	v->a[245209] = sym_comment;
	v->a[245210] = actions(11508);
	v->a[245211] = 1;
	v->a[245212] = anon_sym_LT_LT_LT;
	v->a[245213] = state(4912);
	v->a[245214] = 1;
	v->a[245215] = sym_herestring_redirect;
	v->a[245216] = actions(4348);
	v->a[245217] = 2;
	v->a[245218] = sym_file_descriptor;
	v->a[245219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_12261(v);
}

void	small_parse_table_12261(t_small_parse_table_array *v)
{
	v->a[245220] = state(4746);
	v->a[245221] = 3;
	v->a[245222] = sym_file_redirect;
	v->a[245223] = sym_heredoc_redirect;
	v->a[245224] = aux_sym_redirected_statement_repeat1;
	v->a[245225] = actions(4253);
	v->a[245226] = 20;
	v->a[245227] = anon_sym_SEMI;
	v->a[245228] = anon_sym_PIPE_PIPE;
	v->a[245229] = anon_sym_AMP_AMP;
	v->a[245230] = anon_sym_PIPE;
	v->a[245231] = anon_sym_AMP;
	v->a[245232] = anon_sym_LT;
	v->a[245233] = anon_sym_GT;
	v->a[245234] = anon_sym_LT_LT;
	v->a[245235] = anon_sym_GT_GT;
	v->a[245236] = anon_sym_RPAREN;
	v->a[245237] = anon_sym_SEMI_SEMI;
	v->a[245238] = anon_sym_PIPE_AMP;
	v->a[245239] = anon_sym_AMP_GT;
	small_parse_table_12262(v);
}

void	small_parse_table_12262(t_small_parse_table_array *v)
{
	v->a[245240] = anon_sym_AMP_GT_GT;
	v->a[245241] = anon_sym_LT_AMP;
	v->a[245242] = anon_sym_GT_AMP;
	v->a[245243] = anon_sym_GT_PIPE;
	v->a[245244] = anon_sym_LT_AMP_DASH;
	v->a[245245] = anon_sym_GT_AMP_DASH;
	v->a[245246] = anon_sym_LT_LT_DASH;
	v->a[245247] = 3;
	v->a[245248] = actions(3);
	v->a[245249] = 1;
	v->a[245250] = sym_comment;
	v->a[245251] = actions(1310);
	v->a[245252] = 4;
	v->a[245253] = sym_file_descriptor;
	v->a[245254] = sym__concat;
	v->a[245255] = sym_variable_name;
	v->a[245256] = aux_sym_heredoc_redirect_token1;
	v->a[245257] = actions(1308);
	v->a[245258] = 23;
	v->a[245259] = anon_sym_SEMI;
	small_parse_table_12263(v);
}

void	small_parse_table_12263(t_small_parse_table_array *v)
{
	v->a[245260] = anon_sym_PIPE_PIPE;
	v->a[245261] = anon_sym_AMP_AMP;
	v->a[245262] = anon_sym_PIPE;
	v->a[245263] = anon_sym_AMP;
	v->a[245264] = anon_sym_LT;
	v->a[245265] = anon_sym_GT;
	v->a[245266] = anon_sym_LT_LT;
	v->a[245267] = anon_sym_GT_GT;
	v->a[245268] = anon_sym_esac;
	v->a[245269] = anon_sym_SEMI_SEMI;
	v->a[245270] = anon_sym_SEMI_AMP;
	v->a[245271] = anon_sym_SEMI_SEMI_AMP;
	v->a[245272] = anon_sym_PIPE_AMP;
	v->a[245273] = anon_sym_AMP_GT;
	v->a[245274] = anon_sym_AMP_GT_GT;
	v->a[245275] = anon_sym_LT_AMP;
	v->a[245276] = anon_sym_GT_AMP;
	v->a[245277] = anon_sym_GT_PIPE;
	v->a[245278] = anon_sym_LT_AMP_DASH;
	v->a[245279] = anon_sym_GT_AMP_DASH;
	small_parse_table_12264(v);
}

void	small_parse_table_12264(t_small_parse_table_array *v)
{
	v->a[245280] = anon_sym_LT_LT_DASH;
	v->a[245281] = aux_sym_concatenation_token1;
	v->a[245282] = 3;
	v->a[245283] = actions(3);
	v->a[245284] = 1;
	v->a[245285] = sym_comment;
	v->a[245286] = actions(1306);
	v->a[245287] = 4;
	v->a[245288] = sym_file_descriptor;
	v->a[245289] = sym__concat;
	v->a[245290] = sym_variable_name;
	v->a[245291] = aux_sym_heredoc_redirect_token1;
	v->a[245292] = actions(1304);
	v->a[245293] = 23;
	v->a[245294] = anon_sym_SEMI;
	v->a[245295] = anon_sym_PIPE_PIPE;
	v->a[245296] = anon_sym_AMP_AMP;
	v->a[245297] = anon_sym_PIPE;
	v->a[245298] = anon_sym_AMP;
	v->a[245299] = anon_sym_LT;
	small_parse_table_12265(v);
}

/* EOF small_parse_table_2452.c */
