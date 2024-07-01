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
	v->a[83200] = actions(870);
	v->a[83201] = 1;
	v->a[83202] = sym_comment;
	v->a[83203] = actions(2429);
	v->a[83204] = 6;
	v->a[83205] = anon_sym_PIPE;
	v->a[83206] = anon_sym_LT;
	v->a[83207] = anon_sym_GT;
	v->a[83208] = anon_sym_LT_AMP;
	v->a[83209] = anon_sym_GT_AMP;
	v->a[83210] = anon_sym_LT_LT;
	v->a[83211] = actions(2427);
	v->a[83212] = 8;
	v->a[83213] = sym_file_descriptor;
	v->a[83214] = anon_sym_AMP_AMP;
	v->a[83215] = anon_sym_PIPE_PIPE;
	v->a[83216] = anon_sym_GT_GT;
	v->a[83217] = anon_sym_GT_PIPE;
	v->a[83218] = anon_sym_LT_AMP_DASH;
	v->a[83219] = anon_sym_GT_AMP_DASH;
	small_parse_table_4161(v);
}

void	small_parse_table_4161(t_small_parse_table_array *v)
{
	v->a[83220] = anon_sym_LT_LT_DASH;
	v->a[83221] = 3;
	v->a[83222] = actions(870);
	v->a[83223] = 1;
	v->a[83224] = sym_comment;
	v->a[83225] = actions(2425);
	v->a[83226] = 6;
	v->a[83227] = anon_sym_PIPE;
	v->a[83228] = anon_sym_LT;
	v->a[83229] = anon_sym_GT;
	v->a[83230] = anon_sym_LT_AMP;
	v->a[83231] = anon_sym_GT_AMP;
	v->a[83232] = anon_sym_LT_LT;
	v->a[83233] = actions(2423);
	v->a[83234] = 8;
	v->a[83235] = sym_file_descriptor;
	v->a[83236] = anon_sym_AMP_AMP;
	v->a[83237] = anon_sym_PIPE_PIPE;
	v->a[83238] = anon_sym_GT_GT;
	v->a[83239] = anon_sym_GT_PIPE;
	small_parse_table_4162(v);
}

void	small_parse_table_4162(t_small_parse_table_array *v)
{
	v->a[83240] = anon_sym_LT_AMP_DASH;
	v->a[83241] = anon_sym_GT_AMP_DASH;
	v->a[83242] = anon_sym_LT_LT_DASH;
	v->a[83243] = 3;
	v->a[83244] = actions(870);
	v->a[83245] = 1;
	v->a[83246] = sym_comment;
	v->a[83247] = actions(2421);
	v->a[83248] = 6;
	v->a[83249] = anon_sym_PIPE;
	v->a[83250] = anon_sym_LT;
	v->a[83251] = anon_sym_GT;
	v->a[83252] = anon_sym_LT_AMP;
	v->a[83253] = anon_sym_GT_AMP;
	v->a[83254] = anon_sym_LT_LT;
	v->a[83255] = actions(2419);
	v->a[83256] = 8;
	v->a[83257] = sym_file_descriptor;
	v->a[83258] = anon_sym_AMP_AMP;
	v->a[83259] = anon_sym_PIPE_PIPE;
	small_parse_table_4163(v);
}

void	small_parse_table_4163(t_small_parse_table_array *v)
{
	v->a[83260] = anon_sym_GT_GT;
	v->a[83261] = anon_sym_GT_PIPE;
	v->a[83262] = anon_sym_LT_AMP_DASH;
	v->a[83263] = anon_sym_GT_AMP_DASH;
	v->a[83264] = anon_sym_LT_LT_DASH;
	v->a[83265] = 6;
	v->a[83266] = actions(3);
	v->a[83267] = 1;
	v->a[83268] = sym_comment;
	v->a[83269] = actions(3191);
	v->a[83270] = 1;
	v->a[83271] = sym_string_content;
	v->a[83272] = actions(3195);
	v->a[83273] = 1;
	v->a[83274] = sym_variable_name;
	v->a[83275] = actions(3258);
	v->a[83276] = 1;
	v->a[83277] = anon_sym_DQUOTE;
	v->a[83278] = actions(3193);
	v->a[83279] = 2;
	small_parse_table_4164(v);
}

void	small_parse_table_4164(t_small_parse_table_array *v)
{
	v->a[83280] = aux_sym__simple_variable_name_token1;
	v->a[83281] = aux_sym__multiline_variable_name_token1;
	v->a[83282] = actions(3187);
	v->a[83283] = 9;
	v->a[83284] = anon_sym_BANG;
	v->a[83285] = anon_sym_DASH;
	v->a[83286] = anon_sym_STAR;
	v->a[83287] = anon_sym_QMARK;
	v->a[83288] = anon_sym_DOLLAR;
	v->a[83289] = anon_sym_POUND;
	v->a[83290] = anon_sym_AT;
	v->a[83291] = anon_sym_0;
	v->a[83292] = anon_sym__;
	v->a[83293] = 6;
	v->a[83294] = actions(3);
	v->a[83295] = 1;
	v->a[83296] = sym_comment;
	v->a[83297] = actions(3191);
	v->a[83298] = 1;
	v->a[83299] = sym_string_content;
	small_parse_table_4165(v);
}

/* EOF small_parse_table_832.c */
