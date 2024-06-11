/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_832.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4160(t_small_parse_table_array *v)
{
	v->a[83200] = anon_sym_LT;
	v->a[83201] = anon_sym_GT;
	v->a[83202] = anon_sym_AMP_GT;
	v->a[83203] = anon_sym_LT_AMP;
	v->a[83204] = anon_sym_GT_AMP;
	v->a[83205] = anon_sym_LT_LT;
	v->a[83206] = actions(1141);
	v->a[83207] = 11;
	v->a[83208] = sym_file_descriptor;
	v->a[83209] = sym__concat;
	v->a[83210] = anon_sym_AMP_AMP;
	v->a[83211] = anon_sym_PIPE_PIPE;
	v->a[83212] = anon_sym_GT_GT;
	v->a[83213] = anon_sym_AMP_GT_GT;
	v->a[83214] = anon_sym_GT_PIPE;
	v->a[83215] = anon_sym_LT_AMP_DASH;
	v->a[83216] = anon_sym_GT_AMP_DASH;
	v->a[83217] = anon_sym_LT_LT_DASH;
	v->a[83218] = aux_sym_concatenation_token1;
	v->a[83219] = 3;
	small_parse_table_4161(v);
}

void	small_parse_table_4161(t_small_parse_table_array *v)
{
	v->a[83220] = actions(1094);
	v->a[83221] = 1;
	v->a[83222] = sym_comment;
	v->a[83223] = actions(1122);
	v->a[83224] = 7;
	v->a[83225] = anon_sym_PIPE;
	v->a[83226] = anon_sym_LT;
	v->a[83227] = anon_sym_GT;
	v->a[83228] = anon_sym_AMP_GT;
	v->a[83229] = anon_sym_LT_AMP;
	v->a[83230] = anon_sym_GT_AMP;
	v->a[83231] = anon_sym_LT_LT;
	v->a[83232] = actions(1124);
	v->a[83233] = 11;
	v->a[83234] = sym_file_descriptor;
	v->a[83235] = sym__concat;
	v->a[83236] = anon_sym_AMP_AMP;
	v->a[83237] = anon_sym_PIPE_PIPE;
	v->a[83238] = anon_sym_GT_GT;
	v->a[83239] = anon_sym_AMP_GT_GT;
	small_parse_table_4162(v);
}

void	small_parse_table_4162(t_small_parse_table_array *v)
{
	v->a[83240] = anon_sym_GT_PIPE;
	v->a[83241] = anon_sym_LT_AMP_DASH;
	v->a[83242] = anon_sym_GT_AMP_DASH;
	v->a[83243] = anon_sym_LT_LT_DASH;
	v->a[83244] = aux_sym_concatenation_token1;
	v->a[83245] = 5;
	v->a[83246] = actions(3);
	v->a[83247] = 1;
	v->a[83248] = sym_comment;
	v->a[83249] = actions(3078);
	v->a[83250] = 1;
	v->a[83251] = anon_sym_PIPE;
	v->a[83252] = state(1611);
	v->a[83253] = 1;
	v->a[83254] = aux_sym_pipeline_repeat1;
	v->a[83255] = actions(2880);
	v->a[83256] = 2;
	v->a[83257] = sym_file_descriptor;
	v->a[83258] = aux_sym_heredoc_redirect_token1;
	v->a[83259] = actions(2878);
	small_parse_table_4163(v);
}

void	small_parse_table_4163(t_small_parse_table_array *v)
{
	v->a[83260] = 14;
	v->a[83261] = anon_sym_AMP_AMP;
	v->a[83262] = anon_sym_PIPE_PIPE;
	v->a[83263] = anon_sym_LT;
	v->a[83264] = anon_sym_GT;
	v->a[83265] = anon_sym_GT_GT;
	v->a[83266] = anon_sym_AMP_GT;
	v->a[83267] = anon_sym_AMP_GT_GT;
	v->a[83268] = anon_sym_LT_AMP;
	v->a[83269] = anon_sym_GT_AMP;
	v->a[83270] = anon_sym_GT_PIPE;
	v->a[83271] = anon_sym_LT_AMP_DASH;
	v->a[83272] = anon_sym_GT_AMP_DASH;
	v->a[83273] = anon_sym_LT_LT;
	v->a[83274] = anon_sym_LT_LT_DASH;
	v->a[83275] = 9;
	v->a[83276] = actions(861);
	v->a[83277] = 1;
	v->a[83278] = anon_sym_LT_LT;
	v->a[83279] = actions(1094);
	small_parse_table_4164(v);
}

void	small_parse_table_4164(t_small_parse_table_array *v)
{
	v->a[83280] = 1;
	v->a[83281] = sym_comment;
	v->a[83282] = actions(2083);
	v->a[83283] = 1;
	v->a[83284] = sym_file_descriptor;
	v->a[83285] = actions(3076);
	v->a[83286] = 1;
	v->a[83287] = anon_sym_LT_LT_DASH;
	v->a[83288] = actions(3080);
	v->a[83289] = 2;
	v->a[83290] = anon_sym_AMP_AMP;
	v->a[83291] = anon_sym_PIPE_PIPE;
	v->a[83292] = actions(3084);
	v->a[83293] = 2;
	v->a[83294] = anon_sym_LT_AMP_DASH;
	v->a[83295] = anon_sym_GT_AMP_DASH;
	v->a[83296] = actions(3082);
	v->a[83297] = 3;
	v->a[83298] = anon_sym_GT_GT;
	v->a[83299] = anon_sym_AMP_GT_GT;
	small_parse_table_4165(v);
}

/* EOF small_parse_table_832.c */
