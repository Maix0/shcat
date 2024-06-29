/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_936.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4680(t_small_parse_table_array *v)
{
	v->a[93600] = 2;
	v->a[93601] = sym_regex;
	v->a[93602] = aux_sym_expansion_regex_token1;
	v->a[93603] = actions(1072);
	v->a[93604] = 4;
	v->a[93605] = anon_sym_RPAREN;
	v->a[93606] = anon_sym_RBRACE;
	v->a[93607] = anon_sym_DQUOTE;
	v->a[93608] = sym_raw_string;
	v->a[93609] = 3;
	v->a[93610] = actions(1074);
	v->a[93611] = 1;
	v->a[93612] = sym_comment;
	v->a[93613] = actions(1086);
	v->a[93614] = 1;
	v->a[93615] = anon_sym_DOLLAR;
	v->a[93616] = actions(1088);
	v->a[93617] = 5;
	v->a[93618] = sym_heredoc_content;
	v->a[93619] = sym_heredoc_end;
	small_parse_table_4681(v);
}

void	small_parse_table_4681(t_small_parse_table_array *v)
{
	v->a[93620] = anon_sym_DOLLAR_LBRACE;
	v->a[93621] = anon_sym_DOLLAR_LPAREN;
	v->a[93622] = anon_sym_BQUOTE;
	v->a[93623] = 5;
	v->a[93624] = actions(3);
	v->a[93625] = 1;
	v->a[93626] = sym_comment;
	v->a[93627] = actions(3907);
	v->a[93628] = 1;
	v->a[93629] = aux_sym_heredoc_redirect_token1;
	v->a[93630] = actions(3923);
	v->a[93631] = 1;
	v->a[93632] = anon_sym_in;
	v->a[93633] = state(2132);
	v->a[93634] = 1;
	v->a[93635] = sym_terminator;
	v->a[93636] = actions(2481);
	v->a[93637] = 3;
	v->a[93638] = anon_sym_SEMI_SEMI;
	v->a[93639] = anon_sym_AMP;
	small_parse_table_4682(v);
}

void	small_parse_table_4682(t_small_parse_table_array *v)
{
	v->a[93640] = anon_sym_SEMI;
	v->a[93641] = 6;
	v->a[93642] = actions(1074);
	v->a[93643] = 1;
	v->a[93644] = sym_comment;
	v->a[93645] = actions(3982);
	v->a[93646] = 1;
	v->a[93647] = anon_sym_elif;
	v->a[93648] = actions(3984);
	v->a[93649] = 1;
	v->a[93650] = anon_sym_else;
	v->a[93651] = actions(4010);
	v->a[93652] = 1;
	v->a[93653] = anon_sym_fi;
	v->a[93654] = state(2212);
	v->a[93655] = 1;
	v->a[93656] = sym_else_clause;
	v->a[93657] = state(2065);
	v->a[93658] = 2;
	v->a[93659] = sym_elif_clause;
	small_parse_table_4683(v);
}

void	small_parse_table_4683(t_small_parse_table_array *v)
{
	v->a[93660] = aux_sym_if_statement_repeat1;
	v->a[93661] = 6;
	v->a[93662] = actions(1074);
	v->a[93663] = 1;
	v->a[93664] = sym_comment;
	v->a[93665] = actions(3982);
	v->a[93666] = 1;
	v->a[93667] = anon_sym_elif;
	v->a[93668] = actions(3984);
	v->a[93669] = 1;
	v->a[93670] = anon_sym_else;
	v->a[93671] = actions(4012);
	v->a[93672] = 1;
	v->a[93673] = anon_sym_fi;
	v->a[93674] = state(2129);
	v->a[93675] = 1;
	v->a[93676] = sym_else_clause;
	v->a[93677] = state(2065);
	v->a[93678] = 2;
	v->a[93679] = sym_elif_clause;
	small_parse_table_4684(v);
}

void	small_parse_table_4684(t_small_parse_table_array *v)
{
	v->a[93680] = aux_sym_if_statement_repeat1;
	v->a[93681] = 6;
	v->a[93682] = actions(1074);
	v->a[93683] = 1;
	v->a[93684] = sym_comment;
	v->a[93685] = actions(3982);
	v->a[93686] = 1;
	v->a[93687] = anon_sym_elif;
	v->a[93688] = actions(3984);
	v->a[93689] = 1;
	v->a[93690] = anon_sym_else;
	v->a[93691] = actions(4014);
	v->a[93692] = 1;
	v->a[93693] = anon_sym_fi;
	v->a[93694] = state(2182);
	v->a[93695] = 1;
	v->a[93696] = sym_else_clause;
	v->a[93697] = state(2065);
	v->a[93698] = 2;
	v->a[93699] = sym_elif_clause;
	small_parse_table_4685(v);
}

/* EOF small_parse_table_936.c */
