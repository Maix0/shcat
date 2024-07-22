/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_602.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3010(t_small_parse_table_array *v)
{
	v->a[60200] = anon_sym_LT_LT;
	v->a[60201] = anon_sym_LT_LT_DASH;
	v->a[60202] = anon_sym_SEMI;
	v->a[60203] = 10;
	v->a[60204] = actions(3);
	v->a[60205] = 1;
	v->a[60206] = sym_comment;
	v->a[60207] = actions(782);
	v->a[60208] = 1;
	v->a[60209] = anon_sym_PIPE;
	v->a[60210] = actions(1888);
	v->a[60211] = 1;
	v->a[60212] = aux_sym_heredoc_redirect_token1;
	v->a[60213] = actions(1945);
	v->a[60214] = 1;
	v->a[60215] = sym_file_descriptor;
	v->a[60216] = state(795);
	v->a[60217] = 1;
	v->a[60218] = sym_terminator;
	v->a[60219] = actions(786);
	small_parse_table_3011(v);
}

void	small_parse_table_3011(t_small_parse_table_array *v)
{
	v->a[60220] = 2;
	v->a[60221] = anon_sym_SEMI_SEMI;
	v->a[60222] = anon_sym_SEMI;
	v->a[60223] = actions(790);
	v->a[60224] = 2;
	v->a[60225] = anon_sym_LT_LT;
	v->a[60226] = anon_sym_LT_LT_DASH;
	v->a[60227] = actions(1028);
	v->a[60228] = 2;
	v->a[60229] = anon_sym_AMP_AMP;
	v->a[60230] = anon_sym_PIPE_PIPE;
	v->a[60231] = state(1194);
	v->a[60232] = 3;
	v->a[60233] = sym_file_redirect;
	v->a[60234] = sym_heredoc_redirect;
	v->a[60235] = aux_sym_redirected_statement_repeat1;
	v->a[60236] = actions(1941);
	v->a[60237] = 7;
	v->a[60238] = anon_sym_LT;
	v->a[60239] = anon_sym_GT;
	small_parse_table_3012(v);
}

void	small_parse_table_3012(t_small_parse_table_array *v)
{
	v->a[60240] = anon_sym_GT_GT;
	v->a[60241] = anon_sym_LT_AMP;
	v->a[60242] = anon_sym_GT_AMP;
	v->a[60243] = anon_sym_GT_PIPE;
	v->a[60244] = anon_sym_LT_GT;
	v->a[60245] = 3;
	v->a[60246] = actions(3);
	v->a[60247] = 1;
	v->a[60248] = sym_comment;
	v->a[60249] = actions(523);
	v->a[60250] = 4;
	v->a[60251] = sym_file_descriptor;
	v->a[60252] = sym__concat;
	v->a[60253] = sym_variable_name;
	v->a[60254] = aux_sym_heredoc_redirect_token1;
	v->a[60255] = actions(521);
	v->a[60256] = 16;
	v->a[60257] = anon_sym_esac;
	v->a[60258] = anon_sym_PIPE;
	v->a[60259] = anon_sym_SEMI_SEMI;
	small_parse_table_3013(v);
}

void	small_parse_table_3013(t_small_parse_table_array *v)
{
	v->a[60260] = anon_sym_AMP_AMP;
	v->a[60261] = anon_sym_PIPE_PIPE;
	v->a[60262] = anon_sym_LT;
	v->a[60263] = anon_sym_GT;
	v->a[60264] = anon_sym_GT_GT;
	v->a[60265] = anon_sym_LT_AMP;
	v->a[60266] = anon_sym_GT_AMP;
	v->a[60267] = anon_sym_GT_PIPE;
	v->a[60268] = anon_sym_LT_GT;
	v->a[60269] = anon_sym_LT_LT;
	v->a[60270] = anon_sym_LT_LT_DASH;
	v->a[60271] = aux_sym_concatenation_token1;
	v->a[60272] = anon_sym_SEMI;
	v->a[60273] = 3;
	v->a[60274] = actions(3);
	v->a[60275] = 1;
	v->a[60276] = sym_comment;
	v->a[60277] = actions(527);
	v->a[60278] = 4;
	v->a[60279] = sym_file_descriptor;
	small_parse_table_3014(v);
}

void	small_parse_table_3014(t_small_parse_table_array *v)
{
	v->a[60280] = sym__concat;
	v->a[60281] = sym_variable_name;
	v->a[60282] = aux_sym_heredoc_redirect_token1;
	v->a[60283] = actions(525);
	v->a[60284] = 16;
	v->a[60285] = anon_sym_esac;
	v->a[60286] = anon_sym_PIPE;
	v->a[60287] = anon_sym_SEMI_SEMI;
	v->a[60288] = anon_sym_AMP_AMP;
	v->a[60289] = anon_sym_PIPE_PIPE;
	v->a[60290] = anon_sym_LT;
	v->a[60291] = anon_sym_GT;
	v->a[60292] = anon_sym_GT_GT;
	v->a[60293] = anon_sym_LT_AMP;
	v->a[60294] = anon_sym_GT_AMP;
	v->a[60295] = anon_sym_GT_PIPE;
	v->a[60296] = anon_sym_LT_GT;
	v->a[60297] = anon_sym_LT_LT;
	v->a[60298] = anon_sym_LT_LT_DASH;
	v->a[60299] = aux_sym_concatenation_token1;
	small_parse_table_3015(v);
}

/* EOF small_parse_table_602.c */
