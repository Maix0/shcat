/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_821.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4105(t_small_parse_table_array *v)
{
	v->a[82100] = sym_heredoc_end;
	v->a[82101] = 2;
	v->a[82102] = actions(501);
	v->a[82103] = 1;
	v->a[82104] = sym_comment;
	v->a[82105] = actions(3868);
	v->a[82106] = 1;
	v->a[82107] = anon_sym_EQ;
	v->a[82108] = 2;
	v->a[82109] = actions(501);
	v->a[82110] = 1;
	v->a[82111] = sym_comment;
	v->a[82112] = actions(3830);
	v->a[82113] = 1;
	v->a[82114] = anon_sym_RBRACE;
	v->a[82115] = 2;
	v->a[82116] = actions(501);
	v->a[82117] = 1;
	v->a[82118] = sym_comment;
	v->a[82119] = actions(3870);
	small_parse_table_4106(v);
}

void	small_parse_table_4106(t_small_parse_table_array *v)
{
	v->a[82120] = 1;
	v->a[82121] = anon_sym_esac;
	v->a[82122] = 2;
	v->a[82123] = actions(501);
	v->a[82124] = 1;
	v->a[82125] = sym_comment;
	v->a[82126] = actions(3872);
	v->a[82127] = 1;
	v->a[82128] = anon_sym_esac;
	v->a[82129] = 2;
	v->a[82130] = actions(501);
	v->a[82131] = 1;
	v->a[82132] = sym_comment;
	v->a[82133] = actions(3874);
	v->a[82134] = 1;
	v->a[82135] = anon_sym_BQUOTE;
	v->a[82136] = 2;
	v->a[82137] = actions(501);
	v->a[82138] = 1;
	v->a[82139] = sym_comment;
	small_parse_table_4107(v);
}

void	small_parse_table_4107(t_small_parse_table_array *v)
{
	v->a[82140] = actions(3876);
	v->a[82141] = 1;
	v->a[82142] = anon_sym_esac;
	v->a[82143] = 2;
	v->a[82144] = actions(501);
	v->a[82145] = 1;
	v->a[82146] = sym_comment;
	v->a[82147] = actions(3878);
	v->a[82148] = 1;
	v->a[82149] = anon_sym_in;
	v->a[82150] = 2;
	v->a[82151] = actions(501);
	v->a[82152] = 1;
	v->a[82153] = sym_comment;
	v->a[82154] = actions(3880);
	v->a[82155] = 1;
	v->a[82156] = anon_sym_BQUOTE;
	v->a[82157] = 2;
	v->a[82158] = actions(501);
	v->a[82159] = 1;
	small_parse_table_4108(v);
}

void	small_parse_table_4108(t_small_parse_table_array *v)
{
	v->a[82160] = sym_comment;
	v->a[82161] = actions(3882);
	v->a[82162] = 1;
	v->a[82163] = anon_sym_esac;
	v->a[82164] = 2;
	v->a[82165] = actions(501);
	v->a[82166] = 1;
	v->a[82167] = sym_comment;
	v->a[82168] = actions(3884);
	v->a[82169] = 1;
	v->a[82170] = anon_sym_BQUOTE;
	v->a[82171] = 2;
	v->a[82172] = actions(501);
	v->a[82173] = 1;
	v->a[82174] = sym_comment;
	v->a[82175] = actions(3886);
	v->a[82176] = 1;
	v->a[82177] = anon_sym_RPAREN;
	v->a[82178] = 2;
	v->a[82179] = actions(501);
	small_parse_table_4109(v);
}

void	small_parse_table_4109(t_small_parse_table_array *v)
{
	v->a[82180] = 1;
	v->a[82181] = sym_comment;
	v->a[82182] = actions(3888);
	v->a[82183] = 1;
	v->a[82184] = anon_sym_SEMI_SEMI;
	v->a[82185] = 2;
	v->a[82186] = actions(501);
	v->a[82187] = 1;
	v->a[82188] = sym_comment;
	v->a[82189] = actions(3890);
	v->a[82190] = 1;
	v->a[82191] = anon_sym_RBRACE;
	v->a[82192] = 2;
	v->a[82193] = actions(3);
	v->a[82194] = 1;
	v->a[82195] = sym_comment;
	v->a[82196] = actions(3892);
	v->a[82197] = 1;
	v->a[82198] = aux_sym_heredoc_redirect_token1;
	v->a[82199] = 2;
	small_parse_table_4110(v);
}

/* EOF small_parse_table_821.c */
