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
	v->a[83200] = actions(664);
	v->a[83201] = 1;
	v->a[83202] = sym_comment;
	v->a[83203] = actions(3999);
	v->a[83204] = 1;
	v->a[83205] = anon_sym_BQUOTE;
	v->a[83206] = 2;
	v->a[83207] = actions(664);
	v->a[83208] = 1;
	v->a[83209] = sym_comment;
	v->a[83210] = actions(4001);
	v->a[83211] = 1;
	v->a[83212] = anon_sym_BQUOTE;
	v->a[83213] = 2;
	v->a[83214] = actions(664);
	v->a[83215] = 1;
	v->a[83216] = sym_comment;
	v->a[83217] = actions(4003);
	v->a[83218] = 1;
	v->a[83219] = anon_sym_EQ;
	small_parse_table_4161(v);
}

void	small_parse_table_4161(t_small_parse_table_array *v)
{
	v->a[83220] = 2;
	v->a[83221] = actions(664);
	v->a[83222] = 1;
	v->a[83223] = sym_comment;
	v->a[83224] = actions(4005);
	v->a[83225] = 1;
	v->a[83226] = anon_sym_EQ;
	v->a[83227] = 2;
	v->a[83228] = actions(664);
	v->a[83229] = 1;
	v->a[83230] = sym_comment;
	v->a[83231] = actions(4007);
	v->a[83232] = 1;
	v->a[83233] = aux_sym__simple_variable_name_token1;
	v->a[83234] = 2;
	v->a[83235] = actions(664);
	v->a[83236] = 1;
	v->a[83237] = sym_comment;
	v->a[83238] = actions(4009);
	v->a[83239] = 1;
	small_parse_table_4162(v);
}

void	small_parse_table_4162(t_small_parse_table_array *v)
{
	v->a[83240] = anon_sym_RPAREN;
	v->a[83241] = 2;
	v->a[83242] = actions(664);
	v->a[83243] = 1;
	v->a[83244] = sym_comment;
	v->a[83245] = actions(4011);
	v->a[83246] = 1;
	v->a[83247] = anon_sym_RBRACE;
	v->a[83248] = 2;
	v->a[83249] = actions(664);
	v->a[83250] = 1;
	v->a[83251] = sym_comment;
	v->a[83252] = actions(4013);
	v->a[83253] = 1;
	v->a[83254] = sym_heredoc_start;
	v->a[83255] = 2;
	v->a[83256] = actions(664);
	v->a[83257] = 1;
	v->a[83258] = sym_comment;
	v->a[83259] = actions(4015);
	small_parse_table_4163(v);
}

void	small_parse_table_4163(t_small_parse_table_array *v)
{
	v->a[83260] = 1;
	v->a[83261] = anon_sym_BQUOTE;
	v->a[83262] = 2;
	v->a[83263] = actions(664);
	v->a[83264] = 1;
	v->a[83265] = sym_comment;
	v->a[83266] = actions(4017);
	v->a[83267] = 1;
	v->a[83268] = sym_heredoc_start;
	v->a[83269] = 2;
	v->a[83270] = actions(664);
	v->a[83271] = 1;
	v->a[83272] = sym_comment;
	v->a[83273] = actions(4019);
	v->a[83274] = 1;
	v->a[83275] = anon_sym_RBRACE;
	v->a[83276] = 2;
	v->a[83277] = actions(664);
	v->a[83278] = 1;
	v->a[83279] = sym_comment;
	small_parse_table_4164(v);
}

void	small_parse_table_4164(t_small_parse_table_array *v)
{
	v->a[83280] = actions(4021);
	v->a[83281] = 1;
	v->a[83282] = anon_sym_BQUOTE;
	v->a[83283] = 2;
	v->a[83284] = actions(664);
	v->a[83285] = 1;
	v->a[83286] = sym_comment;
	v->a[83287] = actions(4023);
	v->a[83288] = 1;
	v->a[83289] = anon_sym_fi;
	v->a[83290] = 2;
	v->a[83291] = actions(3);
	v->a[83292] = 1;
	v->a[83293] = sym_comment;
	v->a[83294] = actions(4025);
	v->a[83295] = 1;
	v->a[83296] = aux_sym_heredoc_redirect_token1;
	v->a[83297] = 2;
	v->a[83298] = actions(664);
	v->a[83299] = 1;
	small_parse_table_4165(v);
}

/* EOF small_parse_table_832.c */
