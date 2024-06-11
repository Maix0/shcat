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
	v->a[93600] = sym__expansion_body;
	v->a[93601] = actions(3782);
	v->a[93602] = 2;
	v->a[93603] = anon_sym_0;
	v->a[93604] = anon_sym__;
	v->a[93605] = actions(3778);
	v->a[93606] = 7;
	v->a[93607] = anon_sym_BANG;
	v->a[93608] = anon_sym_DASH;
	v->a[93609] = anon_sym_STAR;
	v->a[93610] = anon_sym_QMARK;
	v->a[93611] = anon_sym_DOLLAR;
	v->a[93612] = anon_sym_POUND;
	v->a[93613] = anon_sym_AT;
	v->a[93614] = 7;
	v->a[93615] = actions(3);
	v->a[93616] = 1;
	v->a[93617] = sym_comment;
	v->a[93618] = actions(3780);
	v->a[93619] = 1;
	small_parse_table_4681(v);
}

void	small_parse_table_4681(t_small_parse_table_array *v)
{
	v->a[93620] = aux_sym__simple_variable_name_token1;
	v->a[93621] = actions(3784);
	v->a[93622] = 1;
	v->a[93623] = sym_variable_name;
	v->a[93624] = actions(3800);
	v->a[93625] = 1;
	v->a[93626] = anon_sym_RBRACE;
	v->a[93627] = state(2464);
	v->a[93628] = 1;
	v->a[93629] = sym__expansion_body;
	v->a[93630] = actions(3782);
	v->a[93631] = 2;
	v->a[93632] = anon_sym_0;
	v->a[93633] = anon_sym__;
	v->a[93634] = actions(3778);
	v->a[93635] = 7;
	v->a[93636] = anon_sym_BANG;
	v->a[93637] = anon_sym_DASH;
	v->a[93638] = anon_sym_STAR;
	v->a[93639] = anon_sym_QMARK;
	small_parse_table_4682(v);
}

void	small_parse_table_4682(t_small_parse_table_array *v)
{
	v->a[93640] = anon_sym_DOLLAR;
	v->a[93641] = anon_sym_POUND;
	v->a[93642] = anon_sym_AT;
	v->a[93643] = 7;
	v->a[93644] = actions(3);
	v->a[93645] = 1;
	v->a[93646] = sym_comment;
	v->a[93647] = actions(3780);
	v->a[93648] = 1;
	v->a[93649] = aux_sym__simple_variable_name_token1;
	v->a[93650] = actions(3784);
	v->a[93651] = 1;
	v->a[93652] = sym_variable_name;
	v->a[93653] = actions(3802);
	v->a[93654] = 1;
	v->a[93655] = anon_sym_RBRACE;
	v->a[93656] = state(2474);
	v->a[93657] = 1;
	v->a[93658] = sym__expansion_body;
	v->a[93659] = actions(3782);
	small_parse_table_4683(v);
}

void	small_parse_table_4683(t_small_parse_table_array *v)
{
	v->a[93660] = 2;
	v->a[93661] = anon_sym_0;
	v->a[93662] = anon_sym__;
	v->a[93663] = actions(3778);
	v->a[93664] = 7;
	v->a[93665] = anon_sym_BANG;
	v->a[93666] = anon_sym_DASH;
	v->a[93667] = anon_sym_STAR;
	v->a[93668] = anon_sym_QMARK;
	v->a[93669] = anon_sym_DOLLAR;
	v->a[93670] = anon_sym_POUND;
	v->a[93671] = anon_sym_AT;
	v->a[93672] = 9;
	v->a[93673] = actions(3);
	v->a[93674] = 1;
	v->a[93675] = sym_comment;
	v->a[93676] = actions(1965);
	v->a[93677] = 1;
	v->a[93678] = anon_sym_DOLLAR;
	v->a[93679] = actions(1967);
	small_parse_table_4684(v);
}

void	small_parse_table_4684(t_small_parse_table_array *v)
{
	v->a[93680] = 1;
	v->a[93681] = anon_sym_DQUOTE;
	v->a[93682] = actions(1969);
	v->a[93683] = 1;
	v->a[93684] = anon_sym_DOLLAR_LBRACE;
	v->a[93685] = actions(1971);
	v->a[93686] = 1;
	v->a[93687] = anon_sym_DOLLAR_LPAREN;
	v->a[93688] = actions(1973);
	v->a[93689] = 1;
	v->a[93690] = anon_sym_BQUOTE;
	v->a[93691] = actions(3806);
	v->a[93692] = 1;
	v->a[93693] = sym_raw_string;
	v->a[93694] = actions(3804);
	v->a[93695] = 3;
	v->a[93696] = sym_variable_name;
	v->a[93697] = sym__expansion_word;
	v->a[93698] = sym_word;
	v->a[93699] = state(2241);
	small_parse_table_4685(v);
}

/* EOF small_parse_table_936.c */
